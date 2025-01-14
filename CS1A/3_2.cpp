//AKELI ADILIJIANG      CS1A              Chapter 4, P. 220, #2
//
/**************************************************************
 * CONVERT POMAN NUMERAL
 * ____________________________________________________________
 * this program asks the user to enter a number within the
 * range of 1 through 10,and convert it to roman numeral
 *____________________________________________________________
 * INPUT
 *  x:the number user want to convert
 * OUTPUT
 *  Roman number
 *************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int x;          //INPUT the number user want to convert

    cout<<"inter a numebr between 1~10 "<<endl;
    cin>>x;
    if( x>=1 && x<=10 )
    {
        switch(x)
        {
            case 1:
                cout<<"I"<<endl;
                break;
            case 2:
                cout<<"II"<<endl;
                break;
            case 3:
                cout<<"III"<<endl;
                break;
            case 4:
                cout<<"IV"<<endl;
                break;
            case 5:
                cout<<"V"<<endl;
                break;
            case 6:
                cout<<"VI"<<endl;
                break;
            case 7:
                cout<<"VII"<<endl;
                break;
            case 8:
                cout<<"VIII"<<endl;
                break;
            case 9:
                cout<<"IX"<<endl;
                break;
            case 10:
                cout<<"X"<<endl;
                break;
        }
    }
    else
        cout<<"error numebr"<<endl;

    return 0;
}
