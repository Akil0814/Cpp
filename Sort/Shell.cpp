#include<iostream>
using namespace std;




int main()
{
    const int len=10;   
    int arr[len]={8,2,9,4,3,5,11,43,10,65};

    sort(arr,len);

    for(int i:arr)
    {
        cout<<i<<" ";
    }

    return 0;
}
