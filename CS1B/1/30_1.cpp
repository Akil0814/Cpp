#include<iostream>
using namespace std;

int find_gcd(int x,int y)
{
    if(x==y)
        return x;

    int tmp=0;
    while(x!=0)
    {
        tmp=x;
        x=y%x;
        y=tmp;
    }

    return y;
}


int main()
{
    int x1=0;
    int x2=0;
    int r=0;
    cout<<"Enter two number:";
    cin>>x1>>x2;

    cout<<find_gcd(x1,x2);

    return 0;
}