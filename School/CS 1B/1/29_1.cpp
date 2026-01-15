#include<iostream>
using namespace std;

double power(int base, int exponent)
{
    double a=base;
    if(exponent==1)
        return base;
    if(exponent==0)
        return 0;
    if(exponent>0)
    {
        for(int i=1;i<exponent;i++)
        {
            a=a*base;
        }
        return a;
    } 
    if(exponent<0)
    {
        a=1;
        for(int i=0;i>exponent;i--)
        {
            a=a/base;
        }
        return a;
    }  
    return -1;
}


int main()
{
    double x=0;
    double p=0;
    double result=0;

    cout<<"enter x:";
    cin>>x;
    cout<<"enter power:";
    cin>>p;

    result=(power(x,p));
    cout<<result<<endl;




    return 0;
}