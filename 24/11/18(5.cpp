 #include<iostream>
using namespace std;
//纯虚函数：只有函数名 参数和返回值 没有函数体
//纯虚函数在基类为派生类保留一个函数名字，以便派生类对其重定义

class AA
{
public:
    AA()
    { cout<<"调用了基类AA"<<endl; }
    virtual~AA()//纯虚析构函数必须有代码实现
    { cout<<"调用了基类~AA"<<endl; }

    virtual void func()=0;//纯虚函数
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

    BB b;
    AA &r=b;
    r.func();

    return 0;
}
