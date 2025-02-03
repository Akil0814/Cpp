//模板类与继承

#include<iostream>
using namespace std;

template<class T1,class T2>
class BB//模板类
{
public:
    T1 m_x;
    T2 m_y;
    BB(const T1 x,const T2 y,int a):AA(a),m_x(x),m_y(y)
    {
        cout<<"调用了BB构造函数\n";
    }
    void func2()const
    {
        cout<<"调用了func2函数:x="<<m_x<<" y="<<m_y<<endl;
    }
};


class AA:public BB<int,string>//普通类
{
public:
    int m_a;
    AA(int a):BB(x,y),m_a(a)
    {
        cout<<"调用AA构造函数\n";
    }
    void func1()
    {
        cout<<"调用了func1函数:m_a="<<m_a<<endl;
    }
};


int main()
{
    BB<int,string>bb(8,"aaa",3);
    bb.func2();
    bb.func1();


    return 0;
}