//模板类与友元
#include<iostream>
using namespace std;

//非类模板约束的友元函数 实例化后，每个函数都是每个类的友元
//不科学的

template<class T1,class T2>
class AA
{
    template<typename T>
    friend void show(T& a);

    T1 m_x;
    T2 m_y;
public:
    AA(const T1 x,const T2 y):m_x(x),m_y(y){}

};

template<typename T>                //通用的函数模板
void show(T& a)
{
    cout<<"通用: x="<<a.m_x<<",y="<<a.m_y<<endl;
}

template<>                          //函数模板具体化版本
void show(AA<int,string>& a)
{
    cout<<"具体: x="<<a.m_x<<",y="<<a.m_y<<endl;
}

int main()
{
    AA<int,string>aa(32,"aaa");
    show(aa);//使用具体化版本

    AA<char,string>b(32,"aaa");
    show(b);//使用通用版本

    return 0;
}