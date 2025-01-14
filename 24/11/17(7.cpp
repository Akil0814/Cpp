#include<iostream>
using namespace std;

class A1
{
public:
    int ma=10;
};

class A2
{
public:
    int mb=20;
};

class B:public A1,public A2//多继承
{
public:
    int mc=30;
};


int main()
{
    B b;

    cout<<"ma="<<b.ma<<"mb="<<b.mb<<"mc="<<b.mc<<endl;

    return 0;
}
