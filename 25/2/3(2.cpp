//模板类继承模板类
#include<iostream>
using namespace std;

template<class T1,class T2>
class BB//模板类//基类
{
public:
    T1 m_x;
    T2 m_y;
    BB(const T1 x,const T2 y):m_x(x),m_y(y)
    {
        cout<<"调用了BB构造函数\n";
    }
    void func2()const
    {
        cout<<"调用了func2函数:x="<<m_x<<" y="<<m_y<<endl;
    }
};


template<class T,class T1,class T2>
class CC:public BB<T1,T2>//模板类继承模板类
{
public:
    T m_a;
    CC(const T a ,const T1 x,const T2 y):BB<T1,T2>(x,y),m_a(a)
    {
        cout<<"调用了cc的构造函数\n";
    }
    void func3()
    {
        cout<<"调用了func3():m_a="<<m_a<<endl;
    }
};

int main()
{
    CC<int,int,string> cc(3,8,"aaa");
    cc.func3();
    cc.func2();


    return 0;
}