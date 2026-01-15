
//AKELI ADILIJIANG      CS1A              Chapter 3, P. 143, #3
//
/**************************************************************
 *CALCULATE TEST SCORE AVERAGE
 * ____________________________________________________________
 * this program asks for five test scores and calculate the average
 * test score and display it. with one decimal point of precision.
 *____________________________________________________________
 * INPUT
 *  test1,2,3,4,5:test scores for each test
 * OUTPUT
 *  average:average score of five test
 *************************************************************/
#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    float test1=0,test2=0,test3=0,test4=0,test5=0;
    float average=0;

    cout<<"enter five test scores"<<endl;
    cin>>test1>>test2>>test3>>test4>>test5;

    average=(test1+test2+test3+test4+test5)/5;
    //calculate average scores

	cout<<fixed<<setprecision(1);//Keep one decimal places
    cout<<"averag score is "<<average<<endl;

    return 0;
}
