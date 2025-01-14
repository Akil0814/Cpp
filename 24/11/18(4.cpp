#include<iostream>
using namespace std;

class AA
{
public:
    AA()
    { cout<<"调用了基类AA"<<endl; }
    virtual~AA()
    { cout<<"调用了基类~AA"<<endl; }
    virtual void func()
    { cout<<"调用了基类func"<<endl; }
};
class BB:public AA
{
public:
    BB()
    { cout<<"调用了派生类BB"<<endl; }
    ~BB()
    { cout<<"调用了派生类~BB"<<endl; }
    void func()
    { cout<<"调用了派生类func"<<endl; }
};

int main()
{
    AA* a=new BB;

    delete a;
    //不会调用派生类的析构函数
    //解决方法 把基类的 析构函数设置为虚函数

    return 0;
}
