//AKELI ADILIJIANG      CS1A             Chapter 8 P.487 , #2
//
/**************************************************************
 * CHEEK LOTTER WINNERS
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
    int i=0;
    for(i=0;i<10;i++)
    {
        if(x==arr[i])
        {
            return arr[i];
        }
    }
    return -1;
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

    found=findaccount(arr,find);

    if(found==-1)
    cout<<"win"<<endl;
    else
    cout<<"didnt win"<<endl;

    return 0;
}
