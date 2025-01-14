#include<iostream>
using namespace std;

int main()
{
    int x=8;
    int* arr=new int[x];
    for(int i=0;i<x;i++)
    {
        arr[i]=10+i;
        cout<<"arr "<<i<<"= "<<*(arr+i)<<endl;
    }
    delete[]arr;

    return 0;
}
