#pragma once
#include <iostream>
using namespace std;

class Book
{
public:
    Book() : bookID(0), title(""), author(""), price(0.0f) {};
    Book(int id, const string& t, const string& a, float p) : bookID(id), title(t), author(a), price(p) {}
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

    int getBookID() const { return bookID; }
    string getBookTitle() const { return title; }
    string getAuthor() const { return author; }
    float getPrice() const { return price; }

    void setBookID(int id) { bookID = id; }
    void setTitle(const string& t) { title = t; }
    void setAuthor(const string& a) { author = a; }
    void setPrice(float p) { price = p; }

private:
    int bookID;
    string title;
    string author;
    float price;
};
