/*
Maximum Subarray Sum (Kadane's Algorithm):
Given an array of integers (which can contain negative numbers),
find the contiguous subarray (containing at least one number) 
which has the largest sum and return its sum.
*/
#include<iostream>
using namespace std;

const int num=5;

int findMaxSubarray(int arr[num])
{
    int sumOfMaxSub=arr[0];
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            int tmp=0;
            tmp=tmp+arr[j];
            if(tmp>sumOfMaxSub)
                sumOfMaxSub=tmp;
        }
        return sumOfMaxSub;
    }

    return -1;
}

int main()
{
    int arr[num]={1,-2,4,6,-9};

    cout<<findMaxSubarray(arr);

    return 0;
}