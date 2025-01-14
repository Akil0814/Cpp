//AKELI ADILIJIANG      CS1A             Chapter 5, P. 294, #2
//
/**************************************************************
 *ASCII GRID GENERATOR
 * ____________________________________________________________
 *This program display the characters for the ASCII codes 0
 *hrough 127. Display 16 characters on each line
 *____________________________________________________________
 * INPUT
 *  none
 * OUTPUT
 *  x:the characters
 *************************************************************/

//Q: Characters for the ASCII Codes
//   Write a program that uses a loop to display the characters for the ASCII codes 0
//   through 127. Display 16 characters on each line

// for the first 32 ASCII number is control characters including changing line so it looks
//kind of weird

#include <iostream>
using namespace std;

int main()
{
    char x=0;      //OUTPUT:characters

    int i=0;       //loop control variable
    int j=0;       //loop control variable


    cout<<"  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16"<<endl;
    cout<<"  _______________________________________________"<<endl;
    for(i=0;i<8;i++)
    {
        cout<<i+1<<"| ";
        for(j=0;j<16;j++)
        {
            cout<<x<<"  ";
            x++;
        }
        cout<<"\n"<<endl;
    }

    return 0;
}
