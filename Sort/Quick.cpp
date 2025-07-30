#include<iostream>
using namespace std;

void QuickSort_hoare(int* first, int* last)//指针对撞
{
    if (first >= last)
        return;

    int pivot=*first;//设置第一个值为基准值

    int* low=first;
    int* high=last;

    while (low<high)//在两个指针相遇前不断循环
    {
        while(low < high && *high >= pivot)//找到从后往前第一个比pivot大的值
            --high;

        while(low < high && *low  <= pivot)//从前往后找到第一个比pivot小的值
            ++low;

        if(low<high)
            swap(*low,*high);//交换两个值，使分区左边的值都比右边大
    }

    swap(*first,*high);//将 基准值 与 最后一个比基准值小 的值交换


    QuickSort_hoare(first,high-1);
    QuickSort_hoare(high+1,last);
}


//这种方法写出来可能会有很多多余的交换，如果数组是 9,8,1,0,3,5,2,4,6 基准值就是6,9和8会被多次swap
//性能开销偏大
void QuickSort_lamuto(int* first, int* last)
{
    if (first >= last)
        return;

    int pivot=*last;//保存最为一位为基准值

    int* i = first;//设置i j 位于第一个位置
    for (int* j = first; j < last; ++j)//当j达到最为位置前持续循环
    {
        if (*j <= pivot)//如果j指向的值小于基准值，就把他扔到前 并递增i
        {
            swap(*i, *j);
            ++i;
        }
    }

    swap(*i, *last);//i会指向第一个大于基准值的值

    QuickSort_lamuto(first, i - 1);
    QuickSort_lamuto(i + 1, last);

/*
    int* i=first-1;//未定义行为
    int* j=first;

    while(j<last)
    {
        if(*j<=pivot)
        {
            ++i;
            swap(*i,*j);
        }
        ++j;
    }
    swap(*(i+1),*last);//i会指向最后一个小于基准值的值

    int* pivot_pos = i + 1;

    QuickSort_lamuto(first, pivot_pos - 1);
    QuickSort_lamuto(pivot_pos + 1, last);
*/


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
        while(low<high&& *high>=pivot)//从前往后找到第一个比pivot小的值
        --high;

        *low=*high;//用从最后开始找到的小于pivot的值 替换第一位，原始位置会变成一个‘坑’

        while(low<high&&*low<=pivot)//找到从后往前第一个比pivot大的值
        ++low;

        *high=*low;//用从最前开始找到的大于pivot的值 替换挖的坑
    }

    *low=pivot;//将最开始被覆盖的基准值重写写入在指针相遇的位置上，相遇位置上的数据会有两份

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
