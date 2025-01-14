#include<iostream>
using namespace std;

/********************************
void Swap(int &a,int &b)
{
    int tmp=a;
    b=a;
    b=tmp;
}
void Swap(double &a,double &b)
{
    int tmp=a;
    b=a;
    b=tmp;
}
**********************************/
//.....需要重载许多次

template<typename T>//定义函数模板
void Swap(T &a,T &b)//
{
    T tmp=a;
    a=b;
    b=tmp;
}

int main()
{
    int x=7;
    int y=4;

    Swap(x,y);
    //Swap<int>(x,y);
    //可以指定模板数据类型

    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;

    return 0;
}
