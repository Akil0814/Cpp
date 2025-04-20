#pragma once
#include <iostream>
using namespace std;

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
