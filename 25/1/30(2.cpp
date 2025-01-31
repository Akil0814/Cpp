//类模板具体化
//类模板具体化有两种：完全具体化和部分具体化
#include<iostream>
using namespace std;

template<class T1,class T2>
class AA
{
    public:
    T1 m_x;
    T2 m_y;

    AA(const T1 x;const T2 y):m_x(x),m_y(y)
    {
        cout<<"模板类：构造函数"
    }
    void show() cosnt;
}


int main()
{


    return 0;
}