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


void sum_rang(int start,int end,int r)
{
    int i=start;
    r=r+i;

    if(start==end)
        return r;

    sum_rang(++start,end,r);

}

int main()
{
    int start=0;
    int end=0;
    int r=0;

    cout<<"Enter start:";
    cin>>start;
    cout<<"Enter start:";
    cin>>end;

    cout<<sum_rang(start,end,r)<<endl;

    return 0;
}