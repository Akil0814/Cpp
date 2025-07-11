#include<iostream>
using namespace std;

void QuickSort(int* first, int* last)
{
    if (first >= last)
        return;

    int pivot=*first;
    

}

int main()
{
    const int len=15;
    int arr[len]={8,2,9,4,3,5,11,43,10,65,44,95,70,2,15};

    QuickSort(&arr[0],&arr[14]);

    for(int i:arr)
        cout<<i<<" ";

    return 0;
}
