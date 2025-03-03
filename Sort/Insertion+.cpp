#include<iostream>
using namespace std;
//优化：
//对已经排序的数组使用二分查找


void sort(int arr[],int n)
{
    int j=0;//待排元素的下标
    int i=0;//需要移动的元素
    int tmp=0;//待排元素
    int end=0;
    int mid=0;
    for(i=1;i<n;i++)
    {
        tmp=arr[i];
        int end=i;
        while(start<end)
        {
            mid=(start+end)/2;
            if(arr[mid]==tmp)
            {
                break;
            }
            if(arr[mid]>tmp)
            {
                end=mid;
                if(start-end<=2)
                mid--;
            }
            if(arr[mid]<tmp)
            {
                start=mid;
                if(start-end<=2)
                mid++;
            }
        }
        for(int j=i-1;j>=mid;j--)
        {
            arr[j+1]=arr[j];//将元素后移一位
        }
        arr[mid]=tmp;//将待排元素放入对应位置
    }
}

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
