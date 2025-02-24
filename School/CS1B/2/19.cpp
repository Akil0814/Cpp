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

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
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

    void showMeber()const
    {
        cout << "Employee: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
        cout << "Address:" << endl;
        cout << "City: " << add.city << endl;
        cout << "State: " << add.state << endl;
    }
};

int showMenu()
{
    int x;

    cout << "----------------------------------------------------" << endl;
    cout << "1:Print all employees\n";
    cout << "2:Update an employee (by getting its id)\n";
    cout << "3:Remove an employee\n";
    cout << "4:Add a new employee\n";
    cout << "5:Store employees to a file\n";
    cout << "6:Load employees from a file\n";
    cout << "7:Search employee by name\n";
    cout << "8:Print employee with highest salary\n";
    cout << "----------------------------------------------------" << endl;

    cin >> x;

    return x;
}

const int searchForEmloyeeByID(const vector<Employee>&emp,int id)
{
    for(int i=0;i<emp.size();i++)
    {
        if(emp[i].id==id)
            return i;
    }
    return -1;
}

void updateAnEmployee(vector<Employee>&emp)
{
    int idLookingFor;
    cout<<"Enter an ID:";
    cin>>idLookingFor;

    const int index=searchForEmloyeeByID(emp,idLookingFor);

    if(index!=-1)
    {
        int change;
        string tmp;

        cout<<"1:id  2:name  3:salary  4:city  5:state\n";
        cout<<"Select the Infor you want to change:";
        cin>>change;

        switch (change)
        {
        case 1:
            cout<<"Enter new id:";
            cin>>change;
            emp[index].id=change;
            break;

        case 2:
            cout<<"Enter new name:";
            getline(cin,tmp);
            emp[index].name=tmp;
            break;

        case 3:
            cout<<"Enter new salary:";
            cin>>change;
            emp[index].salary=change;
            break;

        case 4:
            cout<<"Enter new city:";
            getline(cin,tmp);
            emp[index].add.city=tmp;
            break;
        case 5:

            cout<<"Enter new state:";
            getline(cin,tmp);
            emp[index].add.state=tmp;
            break;

        default:
            cout << "Invalid input" << endl;
            return;
        }
        cout<<"finshe\n";
    }
    else
        cout<<"Can't find ID"<<endl;

}

void removeAnEmployee(vector<Employee>&emp)
{

}

void addANewEmployee(vector<Employee>&emp)
{

}

void storeEmployeesToAFile(vector<Employee>&emp)
{

}

void searchEmployeeByName(vector<Employee>&emp)
{

}

void printEmployeeWithHighestSalary(vector<Employee>&emp)
{

}

void printAllEmployees(const vector<Employee> &emp)
{
    for (int i = 0; i < emp.size(); i++)
    {
        emp[i].showMeber();
        cout << endl;
    }
}

void readEmployee(vector<Employee> &emp)
{
    string filename = R"(W:\Coding\code_text_output\employees_tmp.txt)";
    ifstream fin(filename, ios::in);
    if (fin.is_open() == false)
    {
        cout << "failed to open file:" << filename << endl;
        return;
    }
    // while(!fin.eof())//same
    while (true)
    {
        if (fin.eof() == true)
            break;

        Employee temp;

        fin >> temp.id;
        fin.ignore();

        getline(fin, temp.name);

        fin >> temp.salary;
        fin.ignore();

        getline(fin, temp.add.city);
        getline(fin, temp.add.state);
        fin.ignore();

        emp.push_back(temp);

        // cout << "eof()=" << fin.eof() << ",good() = " << fin.good()
        //      << ", bad() = " << fin.bad() << ", fail() = " << fin.fail() << endl;
    }
    cout << "finsh reding,there is " << emp.size()<<" emp"<< endl;

}

int main()
{
    vector<Employee> emp;
    while (true)
    {

        int choice =showMenu();
        switch (choice)
        {
        case 1:
            printAllEmployees(emp);
            break;
        case 2:
            updateAnEmployee(emp);
            break;
        case 3:
            removeAnEmployee(emp);
            break;
        case 4:
            addANewEmployee(emp);
            break;
        case 5:
            storeEmployeesToAFile(emp);
            break;
        case 6:
            readEmployee(emp);
            break;
        case 7:
            searchEmployeeByName(emp);
            break;
            printEmployeeWithHighestSalary(emp);
        case 8:
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
    }

    return 0;
}
