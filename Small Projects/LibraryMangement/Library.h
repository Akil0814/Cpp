#pragma once
#include <iostream>
using namespace std;

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
