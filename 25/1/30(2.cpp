//类模板具体化
//类模板具体化有两种：完全具体化和部分具体化
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////

//模板类
template<class T1,class T2>
class AA
{
    public:
    T1 m_x;
    T2 m_y;

    AA(const T1 x,const T2 y):m_x(x),m_y(y)
    {
        cout<<"模板类：构造函数\n";
    }
    void show() const;//成员函数 类内声明 类外实现
};

template<class T1,class T2>//成员函数类外实现
void AA<T1,T2>::show()const
{
    cout<<"模板类: x="<<m_x<<", y="<<m_y<<endl;
}

//////////////////////////////////////////////////////////

//类模板完全具体化——为通用类型指定具体参数
template<>
class AA<int,string>
{
    public:
    int m_x;
    string m_y;

    AA(const int x,const string y):m_x(x),m_y(y)
    {
        cout<<"完全具体化：构造函数\n";
    }
    void show() const;//成员函数 类内声明 类外实现
};

void AA<int,string>::show()const//成员函数类外实现
{
    cout<<"完全具体化: x="<<m_x<<", y="<<m_y<<endl;
}
/////////////////////////////////////////////////////////////

//类模板部分具体化
template<class T1>
class AA<T1,string>
{
    public:
    T1 m_x;
    string m_y;

    AA(const T1 x,const string y):m_x(x),m_y(y)
    {
        cout<<"部分具体化：构造函数\n";
    }
    void show() const;//成员函数 类内声明 类外实现
};

template<class T1>
void AA<T1,string>::show()const//成员函数类外实现
{
    cout<<"部分具体化: x="<<m_x<<", y="<<m_y<<endl;
}
/////////////////////////////////////////////////////////////

int main()
{
    //具体化程度高的类优先于具体化程度低的类，具体化的类优于没有具体化的类
    AA<int,string> aa(8,"aaaa");
    aa.show();

    return 0;
}