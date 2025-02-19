//AKELI ADILIJIANG      CS1A              Chapter 4, P. 226, #23
//
/**************************************************************
 * COUCULATE INTERNET SEVICE PRICE
 * ____________________________________________________________
 * This program calculates the cost of internet usage based on
 * the user's selected package and the time used. There are
 *  three packages (A, B, and C), each with different base prices
 *  and overtime charges.
 *____________________________________________________________
 * INPUT
 *  priceA;
 *  priceB
 *  priceC;
 *  overTimePriceA;
 *  overTimePriceB;
 *  timeUsed;
 *  package;
 *  accsessTimeA;
 *  accsessTimeB;
 * OUTPUT
 *  User package cost
 *************************************************************/
#include<iostream>
using namespace std;
int main()
{
    float priceA=9.95;
    float priceB=14.95;
    float priceC=19.95;
    float overTimePriceA=2;
    float overTimePriceB=1;
    float timeUsed;
    char package;
    int accsessTimeA=10;
    int accsessTimeB=20;

    cout<<"inter package"<<endl;
    cin>>package;
    cout<<"inter hours used"<<endl;
    cin>> timeUsed;

    if(timeUsed<=774)
    {
        if(package!='c')
        {
            switch(package)
            {
            case 'a'://a
            case 'A':
            if(timeUsed>accsessTimeA)
                cout<<"need to pay "<<priceA+(timeUsed-accsessTimeA)*overTimePriceA<<endl;
            else
                cout<<"need to pay "<<priceA<<endl;
                break;

            case 66://b
            case 98:
            if(timeUsed>accsessTimeB)
                cout<<"need to pay "<<priceB+(timeUsed-accsessTimeB)*overTimePriceB<<endl;
            else
                cout<<"need to pay "<<priceA<<endl;
                break;

            default:
                cout<<"Error: Invalid package";
                break;
            }
        }
        else if(package =='c'||package =='C')
        {
             cout<<"need to pay"<<priceC<<endl;
        }
    }
    else
        cout<<"Error: Invalid time use";

    return 0;
}
