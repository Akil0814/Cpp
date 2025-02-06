#include <iostream>
using namespace std;

int arr[10]={0,1,2,3,4,5,6,7,8,9};

void shiftArray(int x)
{
    int tempNum=0;
    for(int i=0;i<10;i++)
    {
        int moveIndex=(i+x)%10;
        tempNum=arr[moveIndex];
        arr[moveIndex]=arr[i];
        arr[i]=tempNum;
    }
}


/*
int i=0;
void shiftArray(int x,int tempNum)
{
    if(i<10)
    {
        i++;
        int moveIndex=(i+x)%10;
        tempNum=arr[moveIndex];
        arr[moveIndex]=arr[i];
        shiftArray(x,arr[moveIndex]);
        arr[moveIndex+x]=arr[moveIndex];
    }
}
*/




int main()
{
    int x=0;
    cin>>x;
    shiftArray(x);
    for(int j=0;j<10;j++)
    {
        cout<<arr[j]<<" ";
    }

    return 0;
}