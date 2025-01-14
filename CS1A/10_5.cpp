//AKELI ADILIJIANG      CS1A             Chapter 10, P.588 , #8
//
/**************************************************************
 * CONVET STRING DIGIT TO NUMBER
 * ____________________________________________________________
 *  It reads a series of single-digit numbers as a string,
 * computes their sum, and determines the highest and lowest
 * digits in the string.
 *____________________________________________________________
 * INPUT
 *  series of single-digit
 * OUTPUT
 *  sum of all digits, the max and the min digit
 *************************************************************/

#include <iostream>
using namespace std;

const int SIZE=68;

void SumOfNumbers(char* ptr)
{
    int x=atoi(ptr);
    int max=0;
    int min=9;
    int sum=0;
    for(x;x>=1;x=x/10)
    {
        int i=x%10;
        if(i>max)
            max=i;
        if(i<min)
            min=i;
        sum=sum+i;
    }
    cout<<"Sun= "<<sum<<endl;
    cout<<"max="<<max<<endl;
    cout<<"min="<<min<<endl;
}

int main()
{
    char arr[SIZE];
    bool again;
    do
    {
        again=false;
        cout << "Enter a series of single-digit numbers: ";
        cin>>arr;
        if(isdigit(*arr))
            SumOfNumbers(arr);
        else
        {
            cout<<"Invalid input, please try again!"<<endl;
            again=true;
        }
    }while(again);

    return 0;
}
