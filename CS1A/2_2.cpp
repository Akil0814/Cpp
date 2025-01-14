//AKELI ADILIJIANG      CS1A              Chapter 3, P. 143, #2
//
/**************************************************************
 *CALCULATE TICKET REVENUE
 * ____________________________________________________________
 * this program that asks how many tickets for each class of seats
 * were sold, then displays the amount of income generated from
 * ticket sales. Format  dollar amount in xed-point notation, with
 *  two decimal places of precision.
 *____________________________________________________________
 * INPUT
 *  amountA, amountB, amountC:
 *      how many tickets for each class of seats were sold
 * OUTPUT
 *  total:Total income amount
 *************************************************************/
#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    float priceA = 15, priceB = 12, priceC = 9;
    //price of each kind of ticket
    int amountA = 0, amountB = 0, amountC = 0;
    float totle=0;

    cout<<"How many tickets sold for class A "<<endl;
    cin>>amountA;
    cout<<"How many tickets sold for class B "<<endl;
    cin>>amountB;
    cout<<"How many tickets sold for class C "<<endl;
    cin>>amountC;

    totle=priceA*amountA+priceB*amountB+priceC*amountC;
    //calculate the total income

	cout<<fixed<<setprecision(2);//Keep two decimal places
    cout<<"sales of a"<<setw(12)<<priceA*amountA<<endl;
    cout<<"sales of b"<<setw(12)<<priceB*amountB<<endl;
    cout<<"sales of c"<<setw(12)<<priceC*amountC<<endl;
    cout<<"     totle"<<setw(12)<<totle;

    return 0;

}



