#include<iostream>
using namespace std;
//如果派生类中的成员和基类的成员重名，在派生类中使用该成员时将会使用新增的成员，而不是基类的成员

//基类的成员函数和派生类的成员函数不会构成重载，如果派生类有同名函数
//那么就会遮蔽基类中的同名函数
class A
{
public:
    int ma=30;//两个ma不是同一个变量
    void func()
    { cout<<"use A func"<<endl; }
    void func(int a)
    { cout<<"use A func(int a)"<<endl; }
};

class B:public A
{
    public:
    int ma=80;//两个ma不是同一个变量
    void func()
    {
        cout<<"use B func"<<endl;
    }
};

int main()
{
    B b;
    cout<<"ma="<<b.ma<<endl;
    b.func();
    //b.func(1);//在派生类有同名函数时，编译不会通过


    return 0;
}
