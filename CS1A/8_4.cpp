//AKELI ADILIJIANG      CS1A             Chapter 8 P.487 , #4
//
//
/**************************************************************
 * SORT AND CHEEK THROUGH LIST
 * ____________________________________________________________
 * This program  determine if the number is valid by checking
 * for it in the  list,  If the user enters a number that is
 * in the array, the program should display a message saying
 * that the number is valid. If the user enters a number that
 * is not in the array, the program should display a message
 * indicating that the number is invalid.
 *____________________________________________________________
 * INPUT
 *   number user want to cheek
 * OUTPUT
 *   if the number is in the list or not
 *************************************************************/

#include <iostream>
using namespace std;


void Sort(int(&arr)[18],int x)
{
    int i=0;
    int j=0;
    for(i=0;i<x;i++)
    {
        for (j=0;j<x-i;j++)
        {
            if (arr[j] > arr[j + 1])
            swap(arr[j], arr[j + 1]);
        }
    }
}

int findaccount(int(&arr)[18],int x)
{
    int first=0;
    int last=17;
    while(first <= last)
    {
        int middle=(first+last)/2;
        if(arr[middle]==x)
            return x;
        else if(arr[middle]>x)
        {
           last=middle-1;
        }
        else if(arr[middle]<x)
        {
            first=middle+1;
        }
    }

    return -1;
}

int main()
{
    const int x=18;
    int arr[x]={5658845,4520125,7895122,8777541,8451277,1302850,
                8080152,4562555,5552012,5050552,7825877,1250255,
                1005231,6545231,3852085,7576651,7881200,4581002};
    int find=0;
    int found=0;

    cout<<"Enter"<<endl;
    cin>>find;

    Sort(arr,x);
    found=findaccount(arr,find);

    if(found==-1)
    cout<<"cant find"<<endl;
    else
    cout<<"found"<<endl;

    return 0;
}
