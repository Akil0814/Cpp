/*
3. Find the Duplicate Number (with constraints):
Find the Duplicate Number (with constraints): Given an array of n integers where 
each integer is in the range [1, n] (inclusive) and there is exactly one repeated 
number, find the repeated number.
*/

#include<iostream>
using namespace std;

int main()
{
    const int num=5;
    int arr[num]={1,3,4,2,2};

    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[i]==arr[j])
            {
                cout<<arr[i];
                break;
            }
        }
    }

    return 0;
}