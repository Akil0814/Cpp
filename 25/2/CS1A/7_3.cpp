//AKELI ADILIJIANG      CS1A             Chapter 7 P.444 , #8
//
/**************************************************************
 * PRINT PAYROLL
 * ____________________________________________________________
 * The program should relate the data in each array through the
 * subscripts. For example, the number in element 0 of the hours
 * array should be the number of hoursworked by the employee whose
 * identi cation number is stored in element 0 of the empId array.
 * That same employee s pay rate should be stored in element 0 of
 * thepayRate array.
 *____________________________________________________________
 * INPUT
 *  hours
 *  payRate
 * OUTPUT
 *  empId
 *  wages
 *************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long empId[7] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[7];
    double payRate[7];
    double wages[7];

    for (int i = 0; i < 7; i++) {
        cout << "Enter hours worked by employee #" << empId[i] << ": ";
        cin >> hours[i];
        while (hours[i] < 0) {
            cout << "Invalid entry. Hours worked cannot be negative. Re-enter: ";
            cin >> hours[i];
        }

        cout << "Enter pay rate for employee #" << empId[i] << ": ";
        cin >> payRate[i];
        while (payRate[i] < 6.00) {
            cout << "Invalid entry. Pay rate must be at least 6.00. Re-enter: ";
            cin >> payRate[i];
        }

        wages[i] = hours[i] * payRate[i];
    }

    cout << "\nEmployee Wages:\n";
    cout << "--------------------------------\n";
    cout << setw(10) << "Emp ID" << setw(20) << "Gross Wages\n";
    cout << "--------------------------------\n";
    cout << fixed << setprecision(2);

    for (int i = 0; i < 7; i++) {
        cout << setw(10) << empId[i] << setw(20) << wages[i] << endl;
    }

    return 0;
}
