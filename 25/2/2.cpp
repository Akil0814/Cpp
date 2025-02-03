//模板类与继承

#include<iostream>
using namespace std;

class AA
{
public:
    int m_a;
    AA(int a):m_a(a)
    {
        cout<<"调用AA构造函数\n";
    }
    void func1()
    {
        cout<<"调用了func1函数:m_a="<<m_a<<endl;
    }
};

template<class T1,class T2>
class BB//
{
public:
    T1 m_x;
    T2 m_y;
    BB(const T1 x,const T2 y):m_x(x),m_y(y)
    {
        cout<<"调用了BB构造函数\n"
    }
    void func2()const
    {
        cout<<"调用了func2函数:x="<<m_x<<"y="<<m_y<<endl;
    }
};