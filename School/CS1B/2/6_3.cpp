/*
5. Merge Intervals:
Given a collection of intervals, merge all overlapping intervals.
For example, given [[1,3],[2,6],[8,10],[15,18]],1 the output should be [[1,6],[8,10],[15,18]].
Challenge: Insert a new interval into the merged intervals.
*/
#include<iostream>
using namespace std;

const int col=4;
const int row=2;

int fin[col][row]={0};

void MergeIntervals(int arr[col][row])
{
    int start=arr[0][0];
    int end=arr[0][1];
    int t=0;

    fin[0][0]=arr[0][0];
    fin[0][1]=arr[0][1];

    for(int i=1;i<col;i++)
    {
        if(arr[i][0]<=start)
        {
            start=arr[i][0];
            fin[t][0]=start;
        }
        else
            start=arr[i][0];


        if(arr[i][1]>=end)
        {
            end=arr[i][1];
            fin[t][1]=end;
        }
        else
            end=arr[i][1];

        t++;
    }
}

int main()
{

    int arr2d[col][row]={{1,3},{2,6},{8,10},{15,18}};

    MergeIntervals(arr2d);

    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<fin[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
