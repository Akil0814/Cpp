#include<iostream>
using namespace std;

void InsertionSort(int arr[],int num,int pos,int interval)
{
    int tmp=0;//需要排序的元素
    int i=0;//当前需要排序的元素
    int j=0;

    for(i=pos+interval;i<num;i=i+interval)
    {
        tmp=arr[i];

        for(j=i-interval;j>=0;j=j-interval)
        {
            if(arr[j]<tmp)
                break;
            arr[j+interval]=arr[j];
        }
        arr[j+interval]=tmp;
    }
}

void SortArr(int arr[],int num)
{
    int interval=0;
    int i=0;
    //以interval为间隔分组 最后一次interval必定为0
    for(interval=num/2;interval>0;interval=interval/2)
    {
        //对每一组进行排序
        for(i=0;i<interval;i++)
        {
            InsertionSort(arr,num,i,interval);
        }
    }
}



int main()
{
    const int len=15;
    int arr[len]={8,2,9,4,3,5,11,43,10,65,44,95,70,2,15};

    SortArr(arr,len);

    for(int i:arr)
    {
        cout<<i<<" ";
    }

    return 0;
}
