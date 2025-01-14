#include<iostream>
using namespace std;

class A
{
public:
    int ma=10;
    void func()
    {
        cout<<"调用了A的func()"<<endl;
    }
};

class B:public A
{
public:
    int ma=20;
    void func()
    {
        cout<<"调用了B的func()"<<endl;
    }
};

class C:public B
{
public:
    int ma=30;
    void func()
    {
        cout<<"调用了C的func()"<<endl;
    }
};

int main()
{
    C c;
    cout<<"C::ma="<<c.C::ma<<endl;
    cout<<"B::ma="<<c.B::ma<<endl;
    cout<<"A::ma="<<c.B::A::ma<<endl;

    c.func();
    c.B::func();
    c.B::A::func();
    //c.A::func();

    return 0;
}

