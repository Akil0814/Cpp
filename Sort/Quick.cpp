#include<iostream>
using namespace std;

void SortArr()
{

}

int main()
{
    const int len=15;
    int arr[len]={8,2,9,4,3,5,11,43,10,65,44,95,70,2,15};

    SortArr(arr,len);

    for(int i:arr)
        cout<<i<<" ";

    return 0;
}
