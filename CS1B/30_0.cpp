#include<iostream>
using namespace std;

int find_threshold(int x)
{
    int r=1;
    int i=1;

    if(r<0)
     return 1;
    while(r<x)
    {
        i++;
        r=r+i;
    }
    if(r==x)
        return i--;

    return i;
}


int main()
{
    int x=0;
    cout<<"enter a number:";
    cin>>x;

    cout<<find_threshold(x);

    return 0;
}