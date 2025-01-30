#include<iostream>
using namespace std;

int sum_rang(int start,int end)
{
    int r=0;
    for(int i=start;i<=end;i++)
    {
        r=r+i;
    }
    return r;
}

int main()
{
    int start=3;
    int end=6;

    cout<<sum_rang(start,end)<<endl;

    return 0;
}