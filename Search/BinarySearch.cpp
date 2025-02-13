#include<iostream>
using namespace std;

void search(int arr[],int n,int x)
{
    int start=0;
    int end=n;
    int mid;
    while(start<end)
    {
        mid=(start+end)/2;
        if(arr[mid]==x)
        {
            cout<<"Find";
            return;
        }
        if(arr[mid]>x)
        {
            end=mid-1;
        }
        if(arr[mid]<x)
        {
            start=mid+1;
        }
    }
    cout<<"Can't find";
}

int main()
{
    const int len=10;
    int arr[len]={1,2,3,4,5,6,7,8,9,10};

    int x=0;
    cout<<"Enter the number you art looking for:";
    cin>>x;

    search(arr,len,x);


    return 0;
}