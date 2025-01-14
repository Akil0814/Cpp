#include<iostream>
using namespace std;

class A
{
public:
    int ma=10;
protected:
    int mb=20;
private:
    int mc=30;//private成员不能被访问也不能被修改访问权限
};

class B:public A
{
public:
    using A::mb;//把mb改为公有
private:
    using A::ma;//把ma改为私有
};
int main()
{
    B b;
    //b.ma=11;//修改访问权限后后无法访问
    //b.mb=12;//public继承不能直接访问 protected
    //b.mc=13;//public继承不能访问 private

    return 0;
}
