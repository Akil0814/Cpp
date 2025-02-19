//AKELI ADILIJIANG      CS1A             Chapter 7 P.444 , #1
//
/**************************************************************
 * FIND MAX AND MIN
 * ____________________________________________________________
 * Largest/Smallest Array Values Write a program that lets
 * the user enter 10 values into an array. The program should
 * then display the largest and smallest values stored in the array
 *____________________________________________________________
 * INPUT
 *  numbers
 * OUTPUT
 * max of all number
 * min of all number
 *************************************************************/
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int arr[10]={0};
    int max;
    int min;
    for(int i=0;i<10;i++)
    {
        cout<<"enter the "<<i+1<<" number"<<endl;
        cin>>arr[i];
        if(i==0)
        {
            max=arr[i];
            min=arr[i];
        }

        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    cout<<"max= "<<max<<endl;
    cout<<"min= "<<min<<endl;

    return 0;
}
