//AKELI ADILIJIANG      CS1A              Chapter 3, P. 143, #1
//
/**************************************************************
 * COMPUTE DISTANCE PER TANK OF GAS
 * ____________________________________________________________
 * this program calculates a car's gas mileage. This program ask
 * the user to enter the number of gallons of gas the car can
 * hold, and the number of miles it can be driven on a full tank.
 * It then display the number of miles that may be driven per
 * gallon of gas.
 *____________________________________________________________
 * INPUT
 *  fullTank: the number of gas car can hold
 *  mileFTank: the number of mile can be driven on a full tank
 * OUTPUT
 *  mpg: number of mile can be driven per gallon
 *************************************************************/
#include<iostream>
using namespace std;
int main()
{
    float fullTank=0;
    float mileFTank=0;
    float mpg=0;

    cout<<"enter the gas the car can hold"<<endl;
    cin>>fullTank;
    cout<<"enter the number of miles it can be driven on a full tank"<<endl;
    cin>>mileFTank;

    mpg=mileFTank/fullTank;
    cout<<"number of miles that may be driven per gallon of gas is: "<<mpg<<"mile";

}
