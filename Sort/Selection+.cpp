#include<iostream>
using namespace std;

//优化方式：在每次循环中找到最大与最小值
//最小放到最前面，最大放到最后面，循环次数会变为之前的1/2

void SortePtr(int* p,int x)//指针表示法
{
    int left=0;
    int right=x-1;
    while(left<right)
    {
        int min=left;
        int max=left;
        for(int i=left+1 ;i<=right; i++)
        {
            if(*(p+i)>*(p+max))
                max=i;
            if(*(p+i)<*(p+min))
                min=i;
        }
        if(min!=left)
            swap(*(p+min),*(p+left));
        if(max==left)
            max=min;
        if(max!=right)
            swap(*(p+max),*(p+right));
        left++;
        right--;
    }

}

void SorteArr(int arr[],int x)//数组表示法
{
    int left=0;
    int right=x-1;
    while(left<right)
    {
        int min=left;//max与min为最大与最小值在数组中的下标
        int max=left;//将max和min的下标都初始化为当前数组的第一个元素
        for(int i=left+1 ;i<=right; i++)
        {
            if(arr[i]>arr[max])
                max=i;
            if(arr[i]<arr[min])
                min=i;
        }
        if (min != left)//当最小值不在最左边时
            swap(arr[min],arr[left]);//与最左边的值交换位置
        if (max == left)//当最大值在未交换时出现在最左边时
            max = min;//把最小值的下标赋值给最大值下标
                    //在上一步中min下标的最小值已经与最左边值交换了位置
                    //max下标所属位置被换成了最小值 在原本min的位置的值会被换成最大值
        if (max != right)//当最大值不在最右边时
            swap(arr[max],arr[right]);//与最右边的值交换位置
        left++;
        right--;
    }
}

void SorteRecursion(int* p,int x)//使用递归进行排序
{
    if(x<2)
        return;

    int left=0;
    int right=x-1;
    int min=left;
    int max=left;

    for(int i=left+1 ;i<=right; i++)
    {
        if(*(p+i)>*(p+max))
        {
            max=i;
        }
        if(*(p+i)<*(p+min))
        {
            min=i;
        }
    }
    if (min != left)
        swap(*(p+min),*(p+left));
    if (max == left)
        max = min;

    if (max != right)
        swap(*(p+max),*(p+right));


    SorteRecursion(p+1,x-2);
}

int main()
{
    const int len=10;
    int arr[len]={8,2,9,4,3,5,11,43,10,65};

    SortePtr(arr,len);

    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
