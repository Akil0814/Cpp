#pragma once
#include <iostream>
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
