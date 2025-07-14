#include<iostream>
using namespace std;

void QuickSort_hoare(int* first, int* last)//指针对撞
{
    if (first >= last)
        return;
    int pivot=*first;

    int* low=first;
    int* high=last;

    while(pivot>*high)
        --high;

    while(pivot<*low)
        ++low;

    swap(*low,*high);
    swap(*first,*low);


    QuickSort_hoare(first,low-1);
    QuickSort_hoare(low+1,last);

}

void QuickSort_hole(int* first, int* last)//挖坑填数
{
    if (first >= last)
        return;

    int pivot=*first;//保存第一位
    int* low=first;
    int* high=last;

    while(low<high)
    {
        while(low<high&& *high>=pivot)
        --high;

        *low=*high;//用从最后开始找到的小于pivot的值 替换第一位，原始位置会变成一个‘坑’

        while(low<high&&*low<=pivot)
        ++low;

        *high=*low;//用从最前开始找到的大于pivot的值 替换挖的坑
    }

    *low=pivot;

    QuickSort_hole(first,low-1);//对左边再次排序
    QuickSort_hole(low+1,last);//对右边排序
}

int main()
{
    const int len=15;
    int arr[len]={8,2,9,4,3,5,11,43,10,65,44,95,70,2,15};

    QuickSort_hoare(&arr[0],&arr[14]);

    for(int i:arr)
        cout<<i<<" ";

    return 0;
}
