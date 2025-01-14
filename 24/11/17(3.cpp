#include<iostream>
using namespace std;

class A
{
public:
    int ma=30;
    int mb=50;
    void func()
    { cout<<"use A func"<<endl; }
    void func(int ma)
    {
        cout<<"use A func(int a)"<<endl;
        A::ma=ma;
        this->ma=ma;//重名时可以用 类名+域解析符 用于区分
    }
};


int main()
{
    A a;
    cout<<"ma="<<a.ma<<endl;

    a.A::func();
    a.func();//不存在继承关系时可以省略不写
 
    a.func(1);

    return 0;
}
