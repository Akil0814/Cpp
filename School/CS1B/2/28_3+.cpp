#include <iostream>
using namespace std;

decltype(auto) allocateArray(int x,int size[])
{

    if(x==1)
    {
        return new int[size[0]];
    }
    auto arr=new int[size[0]];
    for(int i=0;i<size[0];i++)
    {
        arr[i]=*allocateArray(x-1,size+1);
    }

    return arr;
}

// void printArray(auto arr,int size[])
// {
//     for(int i=0;i<size[0];i++)
//     {

//     }
// }


int main()
{
    int dimension=3;
    int size[]={2,2,2};

    decltype(auto) ptr=allocateArray(dimension,size);
    //printArray()


    return 0;
}
