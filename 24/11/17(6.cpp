#include<iostream>
using namespace std;

class A
{
public:
 int ma=0;
private:
 int mb=0;
public:
 void show()
 {
    cout<<"A show() ma="<<ma<<" mb="<<mb<<endl;
 }
 void setb(int b)
 {
    mb=b;
 }
};

class B:public A
{
public:
 int mc=0;

 void show()
 {
    cout<<"B show() ma="<<ma<<" mc="<<mc<<endl;
 }
};

int main()
{
    B b;
    A* a=&b;

    b.ma=10;
    b.setb(20);
    b.mc=30;
    b.show();

    a->ma=11;
    a->setb(22);
    a->show();

    return 0;
}
