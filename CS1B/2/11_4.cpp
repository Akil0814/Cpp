/*
Given an unsorted array of integers, find the length of the longest consecutive elements sequence.
Example:
Input: [100, 4, 200, 1, 3, 2]
Output: 4 (The longest sequence is [1, 2, 3, 4])
*/
#include<iostream>
using namespace std;

void sort(int arr[],int x)
{
    int tmp=0;
    int j=0;
    for(int i=1;i<x;i++)
    {
        tmp=arr[i];
        for(j=i-1;arr[j]>tmp&&j>=0;j--)
            arr[j+1]=arr[j];
        arr[j+1]=tmp;
    }
}

int find(int arr[],int x)
{

    int timer=1;
    int max=0;
    for(int i=0,j=1;i<x;i++,j++)
    {
        if(arr[i]==arr[j]+1)
        {
            timer++;
            if(timer>max)
                max=timer;
        }
        else
            timer=1;
    }

    return max;
}


int main()
{
    const int size=6;
    int arr[size]={100, 4, 200, 1, 3, 2};

    sort(arr,size);

    cout<<find(arr,size)<<endl;

    for(int iter:arr)
    {
        cout<<iter<<" ";
    }

    return 0;
}
