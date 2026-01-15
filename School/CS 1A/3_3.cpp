//AKELI ADILIJIANG      CS1A              Chapter 4, P. 220, #4
//
/**************************************************************
 * COUCULATE AREAS OF RECTANGLES
 * ____________________________________________________________
 * this program asks for the length and width of two rectangles
 * and tell you which rectangle has the greater area
 *____________________________________________________________
 * INPUT
 *  x1 y1; length and width for the first rectangle
 *  x2 y2; length and width for the second rectangle
 * OUTPUT
 *  which is the bigger rectangle
 *************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int x1;         //INPUT:length of first rectangle
    int y1;         //INPUT:length of first rectangle
    int x2;         //INPUT:length of second rectangle
    int y2;         //INPUT:length of second rectangle

    cout<<"inter first rectangles long and wild"<<endl;
    cin>>x1>>y1;
    cout<<"inter second rectangles long and wild"<<endl;
    cin>>x2>>y2;

    if(x1*y1>x2*y2)
        cout<<"first rectangles has the greater area"<<endl;
    else if(x1*y1<x2*y2)
        cout<<"second rectangles has the greater area"<<endl;
    else
        cout<<"they has the same area"<<endl;

    return 0;
}
