#include<iostream>
using namespace std;

bool isPerfectNumber(int n)
{
    int tmp=0;

    for(int i=1;i<=n;i++)
    {
        tmp=tmp+i;
    }

    return false;
}


int main()
{
    int enter=0;
    cout<<"Enter a number:"
    cin>>enter;

    if(isPerfectNumber(enter))
        cout<<"is perfect number";
    else
        cout<<"is not perfect number";

    return 0;
}