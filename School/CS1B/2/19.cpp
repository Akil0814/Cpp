/*
Employee Management: Write an employee management program.
Define and Use a Struct: Define a struct Employee with id, name, and salary.
Input & Output: Write two functions one to read an employee from input and another one to print an employee on the screen.
Nested struct: Define a struct Address with city and state members and add an address member to Employee struct.
Array of Structs: Create an array of 100 Employee variables and populate them by reading the employee information from a
file (employee.txt). Each field for each employee is stored in one line.
Menu: Show a menu to user to choose an action from the following:
Print all employees
Update an employee (by getting its id)
Remove an employee
Add a new employee
Store employees to a file
Load employees from a file
Search employee by name
Print employee with highest salary
Functions and parameters: Write functions to do the above actions and use, pass by value,
pass by reference, return struct from the function when it is appropriate.
Display the employee with the highest salary.
*/

#include<iostream>
#include<fstream>
using namespace std;

struct Address
{
    string city;
    string state;
};

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

int  showMenu()
{
    int x;

    cout<<"Print all employees\n";
    cout<<"Update an employee (by getting its id)\n";
    cout<<"Remove an employee\n";
    cout<<"Add a new employee\n";
    cout<<"Store employees to a file\n";
    cout<<"Load employees from a file\n";
    cout<<"Search employee by name\n";
    cout<<"Print employee with highest salary\n";

    cin>>x;

    return x;
}

void readEmployee(Employee e[],string fp="W:\Coding\code_text_output")
{

}

int main()
{
    Employee emp[100];
    while (true)
    {
        showMenu();
        readEmployee();
    }

    return 0;
}
