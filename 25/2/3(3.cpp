//模板类继承模板参数给出的基类(不能是模板类)

#include<iostream>
using namespace std;

class AA//普通类
{
public:
    AA()
    {
        cout<<"调用了AA的构造函数CC()\n";
    }
    AA(int a)
    {
        cout<<"调用了AA的构造函数CC(int a)\n";
    }
};

class BB//普通类
{
public:
    BB()
    {
        cout<<"调用了BB的构造函数CC()\n";
    }
    BB(int a)
    {
        cout<<"调用了BB的构造函数CC(int a)\n";
    }
};

class CC//普通类
{
public:
    CC()
    {
        cout<<"调用了CC的构造函数CC()\n";
    }
    CC(int a)
    {
        cout<<"调用了CC的构造函数CC(int a)\n";
    }
};

template<class T>
class DD//DD是模板类
{
public:
    DD()
    {
        cout<<"调用了DD的构造函数DD()\n";
    }
    DD(int a)
    {
        cout<<"调用了DD的构造函数DD(int a)\n";
    }
};

template<class T>
class EE:public T//模板类继承模板参数给出的基类
//基类是T 是不确定的 可以改变的
{
public:
    EE():T()
    {
        cout<<"调用了EE的构造函数CC()\n";
    }
    EE(int a):T(a)
    {
        cout<<"调用了EE的构造函数CC(int a)\n";
    }
};

int main()
{
    EE<AA>ea1;//AA作为基类
    EE<BB>eb1;//BB作为基类
    EE<CC>ec1;//CC作为基类
    EE<DD<int>>ed1;//DD<int>作为基类
    //EE<DD>ed1;//DD作为基类 错误的

    return 0;
}