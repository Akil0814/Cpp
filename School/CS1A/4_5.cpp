//AKELI ADILIJIANG      CS1A             Chapter 5, P. 297, #22
//
/**************************************************************
 * GENERAT SQUARE PATTER
 * ____________________________________________________________
 * This program prompts the user to enter a positive integer no
 * greater than 15 and displays a square pattern of 'X'
 * characters based on the input size.
 *____________________________________________________________
 * INPUT
 *  size:length of the square
 * OUTPUT
 *  square
 *************************************************************/
#include <iostream>
using namespace std;

int main()
{

    int size=0;       //INPUT:length of the square

    do {
        cout << "Enter a positive integer no greater than 15: ";
        cin >> size;

        if (size < 1 || size > 15) cout << "Invalid input. Please enter a number between 1 and 15." << endl;

    } while (size < 1 || size > 15);

    cout<<"\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++) cout << "X";

        cout << endl;
    }

    return 0;
}
