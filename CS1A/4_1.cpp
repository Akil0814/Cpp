//AKELI ADILIJIANG      CS1A             Chapter 5, P. 294, #1
//
/**************************************************************
 *SUM OF POSITVE INTEGERS
 * ____________________________________________________________
 * This program asks the user for a positive integer value,then
 * the program get the sum of all the integers from 1 up to the
 * number entered.
 *____________________________________________________________
 * INPUT
 *  num: the number user entered
 * OUTPUT
 *  sum: sum of all the integers from 1 up to the number entered
 *************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num = 0;    //INPUT: num: the number user entered
    int sum = 0;    //OUTPUT: sum of all the integers from 1 up to the number entered

    do
    {
        cout << "Enter a positive integer: ";
        cin >> num;

        if (num < 0)
            cout << "Invalid input. Please enter a positive integer." << endl;

    } while (num < 0);

    for (int i = 1; i <= num; i++) sum += i;

    cout << "The sum of all integers from 1 to " << num << " is: " << sum << endl;

    return 0;
}
