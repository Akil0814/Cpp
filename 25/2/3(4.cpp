//模板类与函数
//模板类用于函数的参数和返回值

#include<iostream>
using namespace std;

template<class T1,class T2>
class AA//模板类//基类
{
public:
    T1 m_x;
    T2 m_y;
    AA(const T1 x,const T2 y):m_x(x),m_y(y){}

    void show()const
    {
        cout<<"show():x="<<m_x<<" y="<<m_y<<endl;
    }
};

void func()

int main()
{

    return 0;
}