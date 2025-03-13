#include<iostream>
using namespace std;

void getsum(int** arr,int row,int col)
{
    int sum=0;
    int total=row*col;
    for(int i=0;i<total;i++)
    {
        sum=sum+**(arr+1);
    }
    cout<<sum<<endl;
}

int main()
{
    int row=3;
    int col=4;
    int arr[row][col]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};//2D arr != **arr
    //getsum(arr,row,col);
    

    return 0;
}
