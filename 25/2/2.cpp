//模板类与继承
//模板类继承普通类

#include<iostream>
using namespace std;

class AA//普通类
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
class BB:public AA//模板类//使BB继承自AA
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

int main()
{
    BB<int,string>bb(8,"aaa",3);
    bb.func2();
    bb.func1();


    return 0;
}