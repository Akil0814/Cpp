#include<iostream>
using namespace std;

class AA
{
public:
    AA()
    { cout<<"调用了基类AA"<<endl; }
    ~AA()
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
    BB* b=new BB;
    b->~BB();//手动调用析构函数
    //派生类的析构函数在执行后会自动执行基类的析构函数
    delete b;

    return 0;
}
