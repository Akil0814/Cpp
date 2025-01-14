#include<iostream>
using namespace std;

class A
{
public:
    int ma=10;
};

class B: virtual public A{};
class C: virtual public A{};
//使用虚继承 防止重复定义与二义性
class D: public C,public B{};

int main()
{
    D d;
    d.ma=30;
    cout<<"ma="<<d.ma<<endl;
}
