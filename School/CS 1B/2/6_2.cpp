/*
Maximum Subarray Sum (Kadane's Algorithm):
Given an array of integers (which can contain negative numbers),
find the contiguous subarray (containing at least one number) 
which has the largest sum and return its sum.
*/
#include<iostream>
using namespace std;

const int n=5;

int findMaxSubarray(int arr[n])
{
    int max=arr[0];
    int SubArr[n]={0};

    for(int start=0;start<n;start++)
    {
        for(int end=start;end<n;end++)
        {

            int sum=0;
            for(int i=start;i<=end;i++)
                sum+=arr[i];
            if(sum>max)
            {
                max=sum;
                int z=0;
                for(int j=start;j<=end;j++)
                {
                    SubArr[z]=arr[j];
                    z++;
                }
            }
        }
    }

    for(int& iter:SubArr)
        cout<<iter<<" ";
    cout<<endl;

    return max;
}

int main()
{
    int arr[n]={1,-2,4,6,-9};

    cout<<findMaxSubarray(arr);

    return 0;
}