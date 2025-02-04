//模板类与友元

#include<iostream>
using namespace std;

template<class T1,class T2>
class AA
{
    T1 m_x;
    T2 m_y;
public:
    AA(const T1 x,const T2 y):m_x(x),m_y(y){}
 
    //编译器利用参数模板生成了友元函数 但是这个函数不是模板函数
    //非模板友元；友元函数不是模板函数，而是利用模板类参数生成函数 只能在类内实现
    friend void show(const AA<T1,T2>& a)//把show设为友元函数以访问私有成员
    {
        cout<<"x="<<a.m_x<<" y="<<a.m_y<<endl;
    }

};


int main()
{
    AA<int,string>a(88,"aaaa");


    show(a);

    return 0;
}