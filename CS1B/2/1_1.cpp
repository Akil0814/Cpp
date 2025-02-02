#include<iostream>
using namespace std;

bool isPerfectNumber(int n)
{
    int tmp=0;
    int arr[25]={0};
    int index=0;

    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            arr[index]=i;
            index++;
        }
    }

    int j=0;
    while(arr[j]!=0)
    {
        tmp=tmp+arr[j];
        j++;
    }

    if(tmp==n)
        return true;

    return false;
}


int main()
{
    int enter=0;
    cout<<"Enter a number:";
    cin>>enter;

    if(isPerfectNumber(enter))
        cout<<"is perfect number";
    else
        cout<<"is not perfect number";

    return 0;
}