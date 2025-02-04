#include<iostream>
using namespace std;

//优化方式：没有交换直接退出程序

void Sorte(int* p,int x)
{
    int t=0;
    bool didSwap=false;
    for(int i=x;i>0;i--)
    {
        for(int j=0;j<i-1;j++)
        {
            if(*(p+j) > *(p+j+1))
            {
                t++;
                swap( *(p+j),*(p+j+1));
                didSwap=true;
            }

        }
        if(!didSwap)//没有交换直接退出程序
        {
            cout<<t<<endl;
            return;
        }
    }

    cout<<t<<endl;
}

void SortePtr(int* p,int x)//指针表示法
{
    int t=0;
    bool didSwap=false;
    for(int i=x-1;i>0;i--)//i是需要交换次数//i is swap time
    {
        for(int j=0;j<i;j++)//每次只需要比较0到j之间的数据，其余已经排序好//j is the index number go through
        {
            if(*(p+j) > *(p+j+1))
            {
                swap( *(p+j),*(p+j+1));
                t++;
                didSwap=true;
            }
        }
        if(!didSwap)//没有交换直接退出程序
        {
            cout<<t<<endl;
            return;
        }
    }
    cout<<t<<endl;
}

void SorteArr(int arr[],int x)//数组表示法
{
    bool didswap=false;
    for(int i=x-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                didswap=true;
            }
        }
        if(!didswap)//没有交换直接退出程序
        {
            return;
        }
    }
}

int ti=0;//递归用计数器
void SorteRecursion(int* p,int x)//使用递归进行排序
{
    bool didSwap=false;
    if(x<2)
    {
        cout<<ti<<endl;
        return;
    }

    for(int i=0;i<x-1;i++)
    {
        if(*(p+i) > *(p+i+1))
        {
            ti++;
            swap( *(p+i),*(p+i+1));
        }
    }
    if(!didSwap)//没有交换直接退出程序
    {
        cout<<ti<<endl;
        return;
    }

    SorteRecursion(p,--x);
}

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



