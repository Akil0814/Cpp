#include<iostream>
using namespace std;

void sort(int arr[],int n)//数组
{
    int j=0;//需要移动的元素
    int i=0;//待排元素的下标
    int tmp=0;//待排元素
    for(i=1;i<n;i++)//不需要排第一个元素 所以从1开始
    {
        tmp=arr[i];
        //for(j=i-1; j>=0 && tmp>arr[j] ;j--)//可以将判断条件放入循环中
        for(j=i-1;j>=0;j--)
        {
            if(tmp>arr[j])
                break;
            arr[j+1]=arr[j];//将元素后移一位
        }
        arr[j+1]=tmp;//将待排元素放入对应位置
    }
}

void sortPtr(int *p,int n)//指针
{
    int tmp=0;
    int i=0;//要排的元素
    int j=0;//需要移动的元素
    for(i=1;i<n;i++)
    {
        tmp=*(p+i);
        for(j=i-1; j>=0 && *(p+j)>tmp ;j--)
        {
            *(p+j+1)=*(p+j);
        }
        *(p+j+1)=tmp;
    }
}

int main()
{
    const int len=10;
    int arr[len]={8,2,9,4,3,5,11,43,10,65};

    sortPtr(arr,len);

    for(int i:arr)
    {
        cout<<i<<" ";
    }

    return 0;
}
