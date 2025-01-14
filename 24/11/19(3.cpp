#include<iostream>
using namespace std;

string func()
{
    return "mai";
}



int main()
{
    auto a=3;
    auto b=5.32;
    auto c="akil";
    auto d=func();
    //使用auto关键字 编译器自动推导数据类型
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;

    return 0;
}
//不能滥用auto
//代替冗长复杂的变量声明
