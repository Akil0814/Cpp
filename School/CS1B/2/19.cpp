#include<iostream>
using namespace std;

struct Address
{
    string city;
    string state;
}

struct Employee
{
    int id;
    string name;
    double salary;
    Address add;

    void showMeber()
    {
        cout<<"Employee:"<<name<<endl;
        cout<<"ID:"<<id<<endl;
        cout<<"Salary:"<<salary<<endl;
        cout<<"Address:"<<endl;
        cout<<"City:"<<add.city<<" "<<"State:"<<add.state<<endl;
    }
};

int main()
{
    Employee emp[100];

    return 0;
}
