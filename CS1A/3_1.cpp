//AKELI ADILIJIANG      CS1A              Chapter 4, P. 220, #1
//
/**************************************************************
 * COMPARE TWO NUMBERS VALUE
 * ____________________________________________________________
 * This program ask the user to entre two number and compare
 * the value and tell you witch one is bigger
 *____________________________________________________________
 * INPUT
 *  x;number the user inter
 *  y;number the user inter
 * OUTPUT
 *  the larger number
 *************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int x;                 //INPUT:number the user inter
    int y;                 //INPUT:number the user inter

    cout<<"inter two nember"<<endl;
    cin>>x>>y;

    if(x>y)
        cout<<x<<" is biger";
    else if(y>x)
        cout<<y<<" is biggr";
    else
        cout<<"this two numbers equal";

    return 0;
}
