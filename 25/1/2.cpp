#include<iostream>
using namespace std;

int func()
{
    cout<<"func()"<<endl;

    return 3;
}


int main()
{
    short a=5;
    short b=10;
    decltype(a)da=b;//decltype的定义的da类型会与a相同，包括const等限定符
    decltype(func)*df=func;//填函数名得到函数类型//填函数调用得到返回值类型
    df();
    decltype((func))dff=func;//加括号变成引用
    dff();

    return 0;
}
