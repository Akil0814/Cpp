#include<iostream>
using namespace std;
//创建  基类-->派生类
//销毁 派生类-->基类
class A//基类
{
public:
    A()
    {
        cout<<"A"<<endl;
    }
    ~A()
    {
        cout<<"~A"<<endl;
    }

};

class B:public A//子类//派生类
{
public:
    B()
    {
        cout<<"B"<<endl;
    }
    ~B()
    {
        cout<<"~B"<<endl;
    }
};

class C:public B//孙类//派生类的派生类
{
public:
    C()
    {
        cout<<"C"<<endl;
    }
    ~C()
    {
        cout<<"~C"<<endl;
    }
};
int main()
{
    C c;

    return 0;
}
