#pragma once
#include <iostream>
#include "Book.h"
#include "Borrower.h"
#include "Transaction.h"
using namespace std;

class Library
{
public:
    Library()
    {
        bookCount = borrowerCount = transactionCount = 0;
        bookCapacity = borrowerCapacity = transactionCapacity = 100;
        books = new Book*[bookCapacity];
        borrowers = new Borrower*[borrowerCapacity];
        transactions = new Transaction*[transactionCapacity];
    }

    ~Library()
    {
        for (int i = 0; i < bookCount; ++i) delete books[i];
        delete[] books;

        for (int i = 0; i < borrowerCount; ++i) delete borrowers[i];
        delete[] borrowers;

        for (int i = 0; i < transactionCount; ++i) delete transactions[i];
        delete[] transactions;
    }

    void addBook(Book* book)
    {
        if (bookCount < bookCapacity)
            books[bookCount++] = book;
    }

    void addBorrower(Borrower* borrower)
    {
        if (borrowerCount < borrowerCapacity)
            borrowers[borrowerCount++] = borrower;
    }

    void recordTransaction(Transaction* transaction)
    {
        if (transactionCount < transactionCapacity)
            transactions[transactionCount++] = transaction;
    }

    Book* searchBookByTitle(const string& title) const
    {
        for (int i = 0; i < bookCount; ++i)
            if (books[i]->getBookTitle() == title)
                return books[i];
        return nullptr;
    }

    Book* searchBookByID(int id) const
    {
        for (int i = 0; i < bookCount; ++i)
            if (books[i]->getBookID() == id)
                return books[i];
        return nullptr;
    }

    Borrower* searchBorrowerByName(const string& name) const
    {
        for (int i = 0; i < borrowerCount; ++i)
            if (borrowers[i]->getBorrowerName() == name)
                return borrowers[i];
        return nullptr;
    }

    Borrower* searchBorrowerByID(int id) const
    {
        for (int i = 0; i < borrowerCount; ++i)
            if (borrowers[i]->getBorrowerID() == id)
                return borrowers[i];
        return nullptr;
    }

    void displayAllBooks() const
    {
        for (int i = 0; i < bookCount; ++i)
            books[i]->displayBook();
    }

    void displayAllBorrowers() const
    {
        for (int i = 0; i < borrowerCount; ++i)
            borrowers[i]->displayBorrower();
    }

    void displayAllTransactions() const
    {
        for (int i = 0; i < transactionCount; ++i)
            transactions[i]->displayTransaction();
    }

    Book** getBooks() { return books; }
    Borrower** getBorrowers() { return borrowers; }
    Transaction** getTransactions() { return transactions; }
    int getBookCount() const { return bookCount; }
    int getBorrowerCount() const { return borrowerCount; }
    int getTransactionCount() const { return transactionCount; }

private:
    Book** books;
    Borrower** borrowers;
    Transaction** transactions;
    int bookCount, borrowerCount, transactionCount;
    int bookCapacity, borrowerCapacity, transactionCapacity;
};
