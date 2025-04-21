#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Book.h"
#include "Borrower.h"
#include "Transaction.h"
using namespace std;

class DataHandler
{
public:
    DataHandler(const string& bookF = "W:/Coding/code/cpp/Small Projects/LibraryMangement/books.txt",
                const string& borrowerF = "W:/Coding/code/cpp/Small Projects/LibraryMangement/borrowers.txt",
                const string& transactionF = "W:/Coding/code/cpp/Small Projects/LibraryMangement/transactions.txt")
        : bookFile(bookF), borrowerFile(borrowerF), transactionFile(transactionF) {}

    bool saveBooks(Book** books, int count) const
    {
        ofstream out(bookFile);
        if (!out) return false;

        for (int i = 0; i < count; ++i)
        {
            out << books[i]->getBookID() << '\n';
            out << books[i]->getBookTitle() << '\n';
            out << books[i]->getAuthor() << '\n';
            out << books[i]->getPrice() << '\n';
        }
        return true;
    }

    bool loadBooks(Book**& books, int& count)
    {
        ifstream in(bookFile);
        if (!in) return false;

        count = 0;
        books = new Book*[100];
        while (!in.eof())
        {
            int id;
            string title, author;
            float price;

            if (!(in >> id)) break;
            in.ignore();
            getline(in, title);
            getline(in, author);
            in >> price;
            in.ignore();

            Book* b = new Book();
            b->setBookID(id);
            b->setTitle(title);
            b->setAuthor(author);
            b->setPrice(price);

            books[count++] = b;
        }
        return true;
    }

    bool saveBorrowers(Borrower** borrowers, int count) const
    {
        ofstream out(borrowerFile);
        if (!out) return false;

        for (int i = 0; i < count; ++i)
        {
            out << borrowers[i]->getBorrowerID() << '\n';
            out << borrowers[i]->getBorrowerName() << '\n';
            out << borrowers[i]->getEmail() << '\n';
        }
        return true;
    }

    bool loadBorrowers(Borrower**& borrowers, int& count)
    {
        ifstream in(borrowerFile);
        if (!in) return false;

        count = 0;
        borrowers = new Borrower*[100];
        while (!in.eof())
        {
            int id;
            string name, email;
            if (!(in >> id)) break;
            in.ignore();
            getline(in, name);
            getline(in, email);

            borrowers[count++] = new Borrower(id, name, email);
        }
        return true;
    }

    bool saveTransactions(Transaction** transactions, int count) const
    {
        ofstream out(transactionFile);
        if (!out) return false;

        for (int i = 0; i < count; ++i)
        {
            out << transactions[i]->getTransactionID() << '\n';
            out << transactions[i]->getTransactionDate() << '\n';
            out << transactions[i]->getTransactionInfo() << '\n';
        }
        return true;
    }


private:
    string bookFile;
    string borrowerFile;
    string transactionFile;
};
