#include<iostream>
using namespace std;

double power(int base, int exponent)
{
    if(exponent==1)
        return base;
    else
        return base*power(base,exponent-1);

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