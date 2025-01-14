//AKELI ADILIJIANG      CS1A             Chapter 10, P.588 , #2
//
/**************************************************************
 * REVERSE STRING
 * ____________________________________________________________
 * This program takes a string input from the user and then prints
 *  the string in reverse order.
 *____________________________________________________________
 * INPUT
 * OUTPUT
 *************************************************************/
#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 80;

void Backward(char* str)
{
    int x=strlen(str);
    char back[SIZE]="";
    int i=0;
    for(x;x>0;x--)
    {
        back[x-1]=str[i];
        i++;
    }
    cout<<back<<endl;
}


int main()
{
    char input[SIZE];

    cout << "Enter a string: ";
    cin.getline(input, SIZE);
    Backward(input);

    return 0;
}
