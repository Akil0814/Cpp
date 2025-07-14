#include<iostream>
using namespace std;

void SortePtr(int* p,int x)//指针表示法
{
    int min=0;
    for(int i=0;i<x-1;i++)
    {
        min=i;
        for(int j=i+1;j<x;j++)
        {
            if(*(p+j) < *(p+min))
            {
                min=j;
            }
        }
        swap(*(p+i),*(p+min));

    }
}

void SorteArr(int arr[],int x)//数组表示法
{
    int min=0;//最小元素数组下标
    for(int i=0;i<x-1;i++)//i 为第一个开始的元素
    {
        min=i;//默认第一个元素最小
        for(int j=i+1;j<x;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;//更新最小元素数组下标
            }
        }
        swap(arr[i],arr[min]);
    }
}

void SorteRecursion(int* p,int x)//使用递归进行排序
{
    if(x<2)
        return;

    int min=0;
    for(int i=1;i<x;i++)
    {
        if(*(p+i)<*(p+min))
        {
            min=i;
        }
    }
    if(min!=0)
        swap(*(p),*(p+min));

    SorteRecursion(p+1,--x);
}

int main()
{
    const int len=10;
    int arr[len]={8,2,9,4,3,5,11,43,10,65};

    SorteRecursion(arr,len);

    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
