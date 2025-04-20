#include <iostream>
#include "Book.h"
#include "Borrower.h"
#include "Transaction.h"
#include "Library.h"
#include "DataHandler.h"
#include <sstream>
using namespace std;

void show_menu()
{
    cout << "____________________________________________" << endl;
    cout << "1. Add a Book" << endl;
    cout << "2. Add a Borrower" << endl;
    cout << "3. Record a Transaction" << endl;
    cout << "4. Search Book by Title" << endl;
    cout << "5. Search Borrower by Name" << endl;
    cout << "6. Display All Books" << endl;
    cout << "7. Display All Borrowers" << endl;
    cout << "8. Display All Transactions" << endl;
    cout << "9. Save Data" << endl;
    cout << "10. Load Data" << endl;
    cout << "-1. Exit" << endl;
    cout << "____________________________________________" << endl;
}

int main()
{
    Library library;
    DataHandler handler;
    int input = 0;

    while (input != -1)
    {
        show_menu();
        cin >> input;
        cin.ignore();

        switch (input)
        {
        case 1:
        {
            Book* b = new Book();
            b->inputBook();
            library.addBook(b);
            break;
        }
        case 2:
        {
            Borrower* br = new Borrower();
            br->inputBorrower();
            library.addBorrower(br);
            break;
        }
        case 3:
        {
            int tid, bookID, borrowerID;
            string date;
            cout << "Enter Transaction ID: ";
            cin >> tid;
            cout << "Enter Book ID: ";
            cin >> bookID;
            cout << "Enter Borrower ID: ";
            cin >> borrowerID;
            cin.ignore();
            cout << "Enter Date: ";
            getline(cin, date);

            Book* b = library.searchBookByID(bookID);
            Borrower* br = library.searchBorrowerByID(borrowerID);

            if (b && br)
            {
                Transaction* tr = new Transaction(tid, *b, *br, date);
                library.recordTransaction(tr);
            }
            else
            {
                cout << "Invalid Book ID or Borrower ID." << endl;
            }
            break;
        }
        case 4:
        {
            string title;
            cout << "Enter Book Title: ";
            cin.ignore();
            getline(cin, title);
            Book* b = library.searchBookByTitle(title);
            if (b)
                b->displayBook();
            else
                cout << "Book not found." << endl;
            break;
        }
        case 5:
        {
            string name;
            cout << "Enter Borrower Name: ";
            cin.ignore();
            getline(cin, name);
            Borrower* br = library.searchBorrowerByName(name);
            if (br)
                br->displayBorrower();
            else
                cout << "Borrower not found." << endl;
            break;
        }
        case 6:
            library.displayAllBooks();
            break;
        case 7:
            library.displayAllBorrowers();
            break;
        case 8:
            library.displayAllTransactions();
            break;
        case 9:
            handler.saveBooks(library.getBooks(), library.getBookCount());
            handler.saveBorrowers(library.getBorrowers(), library.getBorrowerCount());
            handler.saveTransactions(library.getTransactions(), library.getTransactionCount());
            cout << "Data saved." << endl;
            break;
        case 10:
        {
            Book** books;
            int bCount;
            if (handler.loadBooks(books, bCount))
            {
                for (int i = 0; i < bCount; ++i)
                    library.addBook(books[i]);
                delete[] books;
            }

            Borrower** borrowers;
            int brCount;
            if (handler.loadBorrowers(borrowers, brCount))
            {
                for (int i = 0; i < brCount; ++i)
                    library.addBorrower(borrowers[i]);
                delete[] borrowers;
            }

            ifstream in("W:/Coding/code/cpp/Small Projects/LibraryMangement/transactions.txt");
            if (in)
            {
                while (!in.eof())
                {
                    int tid;
                    string date;
                    string info;
                    if (!(in >> tid)) break;
                    in.ignore();
                    getline(in, date);
                    getline(in, info);

                    stringstream ss(info);
                    int bookID, borrowerID;
                    ss >> tid >> bookID >> borrowerID;

                    Book* b = library.searchBookByID(bookID);
                    Borrower* br = library.searchBorrowerByID(borrowerID);

                    if (b && br)
                    {
                        Transaction* tr = new Transaction(tid, *b, *br, date);
                        library.recordTransaction(tr);
                    }
                }
            }

            cout << "Data loaded." << endl;
            break;
        }
        case -1:
            break;
        default:
            cout << "Invalid input!" << endl;
            break;
        }
    }

    return 0;
}
