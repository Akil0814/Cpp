//AKELI ADILIJIANG      CS1A             Chapter 8 P.489 , #10
//
//
/**************************************************************
 * SORT AND OUTPUT ARRAY
 * ____________________________________________________________
 * This program  uses two identical arrays of just eight integers.
 * It display the contents of the rst array, then call a function
 * to sort the array using an ascending order bubble sort and print
 *  out the array contents after each pass of the sort.
 *____________________________________________________________
 * INPUT
 *   number in the array
 * OUTPUT
 *   the array befor and after sort
 *************************************************************/
#include <iostream>
using namespace std;

void showarr(int(&arr)[8],int x)
{
    int i=0;
    for(i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void Sort(int(&arr)[8],int x)
{
    int i=0;
    int j=0;
    for(i=0;i<x;i++)
    {
        for (j=0;j<x-i;j++)
        {
            if (arr[j] > arr[j + 1])
            swap(arr[j], arr[j + 1]);
            showarr(arr,x);
        }
    }
}

int main()
{
    const int x=8;
    int arr[x]={2,21,20,500,32,23,43,28};
    int arr1[x]={2,21,20,500,32,23,43,28};

    showarr(arr,x);
    Sort(arr,x);
    showarr(arr1,x);

    return 0;
}
