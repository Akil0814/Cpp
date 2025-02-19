//AKELI ADILIJIANG      CS1A             Chapter 8 P.487 , #3
//
/**************************************************************
 * SORT AND CHEEK LOTTER WINNERS
 * ____________________________________________________________
 *
 * A lottery ticket buyer purchases 10 tickets a week, always
 * playing the same 10 5-digit lucky combinations.This program
 * initializes an array or a vector with these numbers and then
 * lets the player enter this week s winning 5-digit number.
 * program should perform a linear search through the list of
 * the player s numbers and report whether or not one of the
 * tickets is a winner this week.
 *____________________________________________________________
 * INPUT
 *  the number user want to cheek
 * OUTPUT
 *  if the number is winning number or not
 *************************************************************/

#include <iostream>
using namespace std;

int findaccount(int(&arr)[10],int x)
{
    int first=0;
    int last=9;
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

void Sort(int(&arr)[10],int x)
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

int main()
{
    const int x=10;
    int arr[x]={13579, 26791, 26792, 33445, 55555,
                62483, 77777, 79422, 85647, 93121};

    int find=0;
    int found=0;

    cout<<"Enter"<<endl;
    cin>>find;

    Sort(arr,x);
    found=findaccount(arr,find);

    if(found==-1)
    cout<<"didnt win"<<endl;
    else
    cout<<"win"<<endl;

    return 0;
}
