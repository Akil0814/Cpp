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

    void showMember()const
    {
        cout << "Employee: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
        cout << "Address:" << endl;
        cout << "City: " << add.city << endl;
        cout << "State: " << add.state << endl;
    }
};

inline bool checkIfEmpty(const vector<Employee>&emp)
{
    if(emp.empty())
    {
        cout<<"No file loaded !"<<endl;
        return true;
    }
    return false;
}

void changeFliePath(string filePath)
{

    int choice;
    cout<<"Do you want to change the file path"<<endl;
    cout<<"1:Yes     0:No"<<endl;
    if(choice==1)
    {
        cout<<"Enter file path:"<<endl;
        getline(cin,filePath);
    }
    return;
}

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
    if(checkIfEmpty(emp))
        return;

    int idLookingFor;
    cout<<"Enter the ID you are looking for:";
    cin>>idLookingFor;

    const int index=searchForEmloyeeByID(emp,idLookingFor);

    if(index!=-1)
    {
        int change;
        string tmp;
        double tmpNum;

        cout<<"1:ID  2:Name  3:Salary  4:City  5:State\n";
        cout<<"Select the information you want to update:";
        cin>>change;

        switch (change)
        {
        case 1:
            cout<<"Enter updated id:";
            cin>>tmpNum;
            emp[index].id=tmpNum;
            break;

        case 2:
            cout<<"Enter updated name:";
            getline(cin,tmp);
            emp[index].name=tmp;
            break;

        case 3:
            cout<<"Enter updated salary:";
            cin>>tmpNum;
            emp[index].salary=tmpNum;
            break;

        case 4:
            cout<<"Enter updated city:";
            getline(cin,tmp);
            emp[index].add.city=tmp;
            break;
        case 5:
            cout<<"Enter updated state:";
            getline(cin,tmp);
            emp[index].add.state=tmp;
            break;

        default:
            cout << "Invalid input" << endl;
            return;
        }
        cout<<"Update Completed\n";
    }
    else
        cout<<"Unable to find the ID being queried"<<endl;

}

void removeAnEmployee(vector<Employee>&emp)
{
    if(checkIfEmpty(emp))
        return;
    int idLookingFor=0;
    cout<<"Enter the ID you are looking for:";
    cin>>idLookingFor;
    int choice=0;

    const int index=searchForEmloyeeByID(emp,idLookingFor);

    if(index!=-1)
    {
        cout<<"----------------------------------------------"<<endl;
        cout<<"! ! ! Do You Want To Delet This Employee ! ! !"<<endl;
        emp[index].showMember();
        cout<<"----------------------------------------------"<<endl;
        cout<<"1: Yes  0: No"<<endl;
        cin>>choice;
        if(choice==1)
        {
            std::swap(emp[index],emp.back());
            emp.pop_back();
            cout<<"Deletion Completed"<<endl;
        }
        else
            cout<<"Deletion Cancelled"<<endl;
    }
    else
    {
        cout<<"Unable to find the ID being queried"<<endl;
    }

}

void addANewEmployee(vector<Employee>&emp)
{
    Employee temp;
    cout<<"Start adding new members:"<<endl;

    cout<<"Enter new employee's ID:";
    cin >> temp.id;
    cin.ignore();

    cout<<"Enter new employee's Name:";
    getline(cin, temp.name);

    cout<<"Enter new employee's Salary:";
    cin >> temp.salary;
    cin.ignore();

    cout<<"Enter new employee's new city:";
    getline(cin, temp.add.city);

    cout<<"Enter new employee's new state:";
    getline(cin, temp.add.state);

    emp.push_back(temp);

    cout<<"New employee added !\n";
    temp.showMember();
}

void storeEmployeesToAFile(const vector<Employee>&emp)
{
    if(checkIfEmpty(emp))
        return;

}

void searchEmployeeByName(const vector<Employee>&emp)
{
    if(checkIfEmpty(emp))
        return;
    string tmp;
    cout<<"Enter the name of the employee you are looking for:";
    cin.ignore();
    getline(cin,tmp);

    for (auto iter = emp.cbegin(); iter != emp.cend(); ++iter)
    {
        if(tmp==(iter->name))
        {
            cout<<"Employees found:\n";
            iter->showMember();
            return;
        }
    }
    cout<<"Can't fonud employess you are looking for"<<endl;
}

void printEmployeeWithHighestSalary(const vector<Employee>&emp)
{
    if(checkIfEmpty(emp))
        return;
    double hight=0;
    auto maxIter = emp.cbegin();
    for (auto iter = emp.cbegin(); iter != emp.cend(); ++iter)
    {
        if (iter->salary > maxIter->salary)
        {
            maxIter = iter;
        }
    }
    cout<<"Highest Salary Employee:"<<endl;
    maxIter->showMember();
}

void printAllEmployees(const vector<Employee> &emp)
{
    if(checkIfEmpty(emp))
        return;
    for (int i = 0; i < emp.size(); i++)
    {
        emp[i].showMember();
        cout << endl;
    }
}

void readEmployee(vector<Employee> &emp,string filePath= R"(W:\Coding\code_text_output\employees_tmp.txt)")
{


    ifstream fin(filePath, ios::in);
    if (fin.is_open() == false)
    {
        cout << "File open failed:" << filePath << endl;
        cout<<"Please change the file path:"<<endl;
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
        //      << ", bad() = " << fin.bad() << ", fail() = " << fin.fail() << endl;//
    }
    cout << "File read completed, The file contains " << emp.size()<<" employee information"<< endl;

}

int main()
{
    vector<Employee> emp;
    while (true)
    {
        string filePath;
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
        case 8:
            printEmployeeWithHighestSalary(emp);
            break;

        default:
            cout << "Invalid input" << endl;
            break;
        }
    }

    return 0;
}
