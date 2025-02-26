#include<iostream>
using namespace std;

int main()
{
    int i=3;
    double j=3.21;
    //->指定返回类型
    //可以在函数体中使用父作用域的局部变量
    //局部变量不能直接引用 必须在捕获列表中
    //[]捕获列表 捕获方式可以是值和引用
    //[=]自动判断捕获的变量
    //[&]自动判断捕获的变量 引用捕获
    //[=,&i]引用i 自动捕获其他

    auto f=[&i,j](const int& no)->double{
        cout<<"i="<<i<<endl;
        cout<<"j="<<j<<endl;
        i++;
        cout<<"auto f[] "<<no<<endl;
        return 3.21;
    };

    f(312);

    cout<<"i="<<i<<endl;


    return 0;
}
