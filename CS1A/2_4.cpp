//AKELI ADILIJIANG      CS1A              Chapter 3, P. 143, #4
//
/**************************************************************
 * CALCULATE AVERAGE RAINFALL
 * ____________________________________________________________
 * this program that calculates the average rainfall for three
 * months. the progranm ask the user to enter the name of each
 * month, and the amount of rain that fell each month.
 *____________________________________________________________
 * INPUT
 *  month1,month2,month3:
 *     naem of each month
 *  rainfall1,rainfall2,rainfall3:
 *     rain fall each month
 * OUTPUT
 *  avrage:average rain fall of five month
 *************************************************************/
#include<iostream>
#include<string>

using namespace std;
int main()
{
    int numOfMonth=3;//number of month need to input
    string month1,month2,month3;
    float rainfall1=0,rainfall2=0,rainfall3=0;
    float average=0;

    cout<<"enter the name of three month"<<endl;
    cin>>month1>>month2>>month3;
    cout<<"enter the number of rainfall for each month in inches"<<endl;
    cin>>rainfall1>>rainfall2>>rainfall3;

    average=(rainfall1+rainfall2+rainfall3)/numOfMonth;
    //Calculate average rainfall

    cout<<"The average rainfall for"
    <<" "<<month1
    <<", "<<month2
    <<" and "<<month3
    <<" is "<<average<<"inches";

    return 0;
}
