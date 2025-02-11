#include<iostream>
using namespace std;




int main()
{
    const int len=10;
    //int arr[len]={1,2,9,4,3,5,11,43,10,65};
    int arr[len]={1,2,3,4,5,6,10,7,8,9};

    Sorte(arr,len);

    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}