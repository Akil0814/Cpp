//模板类与友元
#include<iostream>
using namespace std;

//约束模板有元：模板实例化时，每个实例化的类对应一个友元函数
template<typename T>
void show(T& a);        //第一步:在模板类的定义前 声明友元函数

template<class T1,class T2>
class AA
{
    friend void show<>(AA<T1,T2>&a);    //第二步:在模板类中，再次声明友元函数模板
    T1 m_x;
    T2 m_x;
public:
    AA(const T1 x,const T2 y):m_x(x),m_y(y){}

};

template<typename T>                //第三步:友元函数模板的定义
void show(T& a)
{
    cout<<"通用: x="<<a.m_x<<",y="<<a.m_y<<endl;
}

template<>                      //第三步:具体化版本
void show(AA<int,string>& a)
{
    cout<<"具体: x="<<a.m_x<<",y="<<a.m_y<<endl;
}

int main()
{
    AA<int,string>aa(32,"aaa")
    show(aa);//使用具体化版本

    AA<char,string>b(32,"aaa")
    show(b);//使用通用版本

    return 0;
}