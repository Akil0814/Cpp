//AKELI ADILIJIANG      CS1A             Chapter 9, P.537 , #5
//
/**************************************************************
 *  REWRITE FUNCTION
 * ____________________________________________________________
 * The following function uses reference variables as parameters.
 * Rewrite the function so it uses pointers instead of reference
 * variables, and then demonstrate the function in a complete program
 *____________________________________________________________
 * INPUT
 *  tow verabel
 * OUTPUT
 *  tow verabel been switch
 *************************************************************/
#include <iostream>
using namespace std;

int doSomething(int* x, int* y)
{
 int temp = *x;
 *x = *y * 10;
 *y = temp * 10;
 return *x + *y;
}

int main()
{

    int x=3;
    int y=5;
    cout<<"x= "<<x<<" y= "<<y<<endl;
    doSomething(&x,&y);
    cout<<"x= "<<x<<" y= "<<y<<endl;

    return 0;
}
