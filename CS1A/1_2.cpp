//AKELI ADILIJIANG      CS1A              Chapter 2, P. 81, #5
//
/**************************************************************
 *
 *GET AVERAGE OF FIVE NUMBUED
 * ____________________________________________________________
 * stores five 28, 32, 37, 24, and 33 in ve different variables
 * get the sum of five number and display average of the screen
 *____________________________________________________________
 * INPUT
 * five number a b c d e
 * OUTPUT
 * average of five number
 **************************************************************/
#include<iostream>
int main()
{
    int a,b,c,d,e;//creat five variables
    a=28; b=32; c=37; d=24; e=33;
    int sum=a+b+c+d+e;//get sum of five variables
    std::cout<<"average of five number is "<<sum/5;//printf sum of variables

    return 0;
}