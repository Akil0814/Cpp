#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vv={1,2,3,4,5,6,7,8,9,10};

    for(auto it=vv.begin();it!=vv.end();it++)
        cout<<*it<<" ";//使用迭代器遍历容器
    cout<<endl;

    //for(迭代的变量:迭代的范围)//用基于范围的for循环遍历
    for(auto val:vv)//把容器vv中的元素逐个赋值给val
    {
        cout<<val<<" ";
        //vv.push_back(10);//会导致迭代器失效
        //push_back会重新构造函数导致指针失效
    }
    cout<<endl;

    return 0;
}