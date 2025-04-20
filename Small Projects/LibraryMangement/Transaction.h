#pragma once
#include <iostream>
#include "Book.h"
#include "Borrower.h"
using namespace std;

class Transaction
{
public:
    Transaction(int tid, const Book& b, const Borrower& br, const string& d)
        : transactionID(tid), book(b), borrower(br), date(d) {}

    ~Transaction() = default;

    void displayTransaction() const
    {
        cout << "Transaction ID: " << transactionID << endl;
        cout << "Date: " << date << endl;
        cout << "Book: ";
        book.displayBook();
        cout << "Borrower: ";
        borrower.displayBorrower();
    }

    int getTransactionID() const { return transactionID; }
    string getTransactionDate() const { return date; }
    string getTransactionInfo() const
    {
        return to_string(transactionID) + " " +
               to_string(book.getBookID()) + " " +
               to_string(borrower.getBorrowerID());
    }

private:
    int transactionID;
    const Book& book;
    const Borrower& borrower;
    string date;
};
