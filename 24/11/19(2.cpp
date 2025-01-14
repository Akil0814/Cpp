//typeid 用于获取数据类型的信息
//typeid 返回type_info类

#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

class AA
{};

int main()
{
    int x=0;
    int* px=&x;
    int& rx=x;

    //不同编译器返回name不一样

    //用于C++内置数据类型
    cout<<"typeid(int)="<<typeid(int).name()<<endl;
    cout<<"typeid(x)="<<typeid(x).name()<<endl;
    cout<<"typeid(int*)="<<typeid(int*).name()<<endl;
    cout<<"typeid(px)="<<typeid(px).name()<<endl;
    cout<<"typeid(int&)="<<typeid(int&).name()<<endl;
    cout<<"typeid(rx)="<<typeid(rx).name()<<endl;


    AA a;
    AA* pa=&a;
    AA& ra=a;

    //用于自定义数据类型
    cout<<"typeid(AA)="<<typeid(AA).name()<<endl;
    cout<<"typeid(aa)="<<typeid(a).name()<<endl;
    cout<<"typeid(AA*)="<<typeid(AA*).name()<<endl;
    cout<<"typeid(pa)="<<typeid(pa).name()<<endl;
    cout<<"typeid(AA&)="<<typeid(AA&).name()<<endl;
    cout<<"typeid(ra)="<<typeid(ra).name()<<endl;

    //typeid重载了==和!=运算符
    if(typeid(AA)==typeid(a))
        cout<<"yes1"<<endl;
    if(typeid(AA)==typeid(pa))
        cout<<"yes2"<<endl;


    return 0;
}
