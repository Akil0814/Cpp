#include<iostream>
using namespace std;

template<typename T>//定义函数模板
//使用模板必须有可推导的数据类型 
void Swap(T &a,T &b)//
{
    T tmp=a;
    a=b;
    b=tmp;
}

int main()
{
    int x=7;
    //char x='o';
    //实参与函数模板需要匹配
    int y=4;

    Swap(x,y);

    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;

    return 0;
}
