#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book
{
public:
    Book() : bookID(0), title(""), author(""), price(0.0f) {};
    ~Book() = default;
    void inputBook()
    {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore();

        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Author: ";
        getline(cin, author);

        cout << "Enter Price: ";
        cin >> price;
    }
    void displayBook() const
    {
        cout << "ID: " << bookID
             << ", Title: " << title
             << ", Author: " << author
             << ", Price: $" << price
             << endl;
    }
    int getBookID() const
    {
        return bookID;
    }
    string getBookTitle() const
    {
        return title;
    }
    float getPrice() const
    {
        return price;
    }

private:
    int bookID;
    string title;
    string author;
    float price;
};

class Borrower
{
public:
    Borrower() : borrowerID(0), name(""), email("") {}

    Borrower(int ID, string m_name, string m_email)
    {
        borrowerID = ID;
        name = m_name;
        email = m_email;
    }

    ~Borrower() = default;

    void inputBorrower()
    {
        cout << "Enter Borrower ID: ";
        cin >> borrowerID;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Email: ";
        getline(cin, email);
    }

    void displayBorrower() const
    {
        cout << "ID: " << borrowerID
             << ", Name: " << name
             << ", Email: " << email << endl;
    }

    int getBorrowerID() const
    {
        return borrowerID;
    }

    string getBorrowerName() const
    {
        return name;
    }

private:
    int borrowerID;
    string name;
    string email;
};

class Transaction
{
public:
private:
    int transactionID;
    string date;
    // const Book &book(reference to a Book object)
    // const Borrower &borrower(reference to a Borrower object)
};

class Library
{
public:
private:
    // Book **books(dynamically allocated array of Book pointers)
    // Borrower **borrowers(dynamically allocated array of Borrower pointers)
    // Transaction **transactions(dynamically allocated array of Transaction pointers) int bookCount
    int borrowerCount;
    int transactionCount;
    int bookCapacity;
    int borrowerCapacity;
    int transactionCapacity;
};

class DataHandler
{
public:
private:
    string bookFile;
    string borrowerFile;
    string transactionFile;
};

void show_muen()
{
    cout<<"____________________________________________"<<endl;
    cout << "1.Add a Book" << endl;
    cout << "2.Add a Borrower" << endl;
    cout << "3.Record a Transaction" << endl;
    cout << "4.Search Book by Title" << endl;
    cout << "5.Search Borrower by Name" << endl;
    cout << "6.Display All Books" << endl;
    cout << "7.Display All Borrowers" << endl;
    cout << "8.Display All Transactions" << endl;
    cout << "9.Save Data" << endl;
    cout << "10.Load Data" << endl;
    cout << "-1.Exit" << endl;
    cout<<"____________________________________________"<<endl;

}

main()
{
    int input = 0;
    while (input != -1)
    {
        show_muen();
        cin >> input;
        switch (input)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        default:
            cout << "invaled input!" << endl;
            break;
        }
    }

    return 0;
}
