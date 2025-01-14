#include<iostream>
using namespace std;

class A//基类
{
public:
    int ma;
private:
    int mb;
public:
    A():ma(0),mb(0)//使用初始化列表初始化//基类的默认构造函数
    {
        cout<<"调用了基类的默认构造函数A()"<<endl;

    }
    A(int a,int b):ma(a),mb(b)//基类有两个参数的构造函数
    {
        cout<<"调用了基类的构造函数A(int a,int b)"<<endl;

    }
    A(const A &a):ma(a.ma+1),mb(a.mb+1)//基类的拷贝构造函数
    {
        cout<<"调用了基类的默认构造函数A(const A &a)"<<endl;
    }

    void showA()
    {
        cout<<"ma="<<ma<<" mb="<<mb<<endl;
    }
};

class B:public A
{
public:
    int mc;
    B():mc(0),A()
    {
        cout<<"调用了派生类的默认构造函数B()"<<endl;
    }
    B(int a,int b,int c):A(a,b),mc(c)
    {
        cout<<"调用了派生类的构造函数B(int a,int b, int c)"<<endl;
    }
    B(const A&a, int c):A(a),mc(c)
    {
        cout<<"调用了派生类的拷贝构造函数B(const A&a, int c)"<<endl;
    }

    void showB()
    {
        cout<<"mc="<<mc<<endl;
    }
};


int main()
{
    B b1;
    b1.showA();
    b1.showB();

    B b2(1,2,3);
    b2.showA();
    b2.showB();

    A a(10,20);
    B b3(a,30);
    b3.showA();
    b3.showB();

    return 0;
}

