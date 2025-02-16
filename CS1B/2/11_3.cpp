/*
 Find Missing Number
 Given an array containing n distinct numbers taken
 from [0, n], find the missing number.
*/
#include<iostream>
using namespace std;

//int arr[size]={2,7,8,0,1,6,5,4};//0-8,missing 3


void sort(int arr[],int num)
{
    int tmp;
    for(int i=1;i<num;i++)
    {
        tmp=arr[i];
        int j;
        for(j=i-1; arr[j]>tmp &&j>=0 ;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=tmp;
    }

}


int find(int arr[],int num)
{
    for (int i = 0; i < num; i++)
    {
            if (arr[i]!=i)
            {
                return i;
            }
    }
    return -1;
}


int main()
{
    const int size=8;
    int arr[size]={2,7,8,0,1,6,5,4};//0-8,missing 3

    sort(arr,size);

    // for(int iter:arr)
    // {
    //     cout<<iter<<" ";
    // }

    cout<<endl;

    cout<<find(arr,size)<<" is missing";

    

    return 0;
}