#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main()
{
    int arr2D[3][3]={{7,8,9},{4,5,6},{1,2,3}};
    int arr[9]={1,2,3,4,5,6,7,8,9};

    int *p=arr;

    decltype(&arr2D)x;
    decltype(&arr)y;

    cout<<sizeof(y)<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(*p)<<endl;


    //cout<<sizeof(arr2D)<<endl;

    return 0;
}
