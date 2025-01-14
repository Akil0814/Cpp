//AKELI ADILIJIANG      CS1A             Chapter 10, P.588 , #1
//
/**************************************************************
 * COUNT STRING CHARATERS
 * ____________________________________________________________
 * This C++ program defines a function countCharacters that counts
 * the number of characters in a null-terminated string and then
 * prints the character count for the string entered by the user.
 *____________________________________________________________
 * INPUT
 *    a string
 * OUTPUT
 *    the charaters in the string
 *************************************************************/
#include <iostream>
using namespace std;

int countCharacters(const char* str)
{
    int count = 0;

    while (str[count] != '\0')
        count++;

    return count;
}

int main()
{
    const int SIZE = 80;
    char input[SIZE];

    cout << "Enter a string: ";
    cin.getline(input, SIZE);

    int characterCount = countCharacters(input);
    cout << "The string contains " << characterCount << " characters." << endl;

    return 0;
}
