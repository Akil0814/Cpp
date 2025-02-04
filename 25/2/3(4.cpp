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


class BB
{
public:
    void show()
    {
        cout<<"调用了BB show()\n";
    }

};

//采用普通函数，参数和返回值是模板类的实例化版本
AA<int,string> func(AA<int, string>& aa)//只能处理模板类AA给定的参数
{
    aa.show();
    cout<<"调用了func(AA<int, string>& aa)\n";

    return aa;
}


//函数模板，参数和返回值是模板类AA
/*
template<typename T1,typename T2>
AA<T1,T2> func(AA<T1,T2>& aa)
{
    aa.show();
    cout<<"调用了func(AA<T1,T2>& aa)\n";

   return aa;
}
*/

//函数模板，参数和返回值是任意类型
template<typename T>
T func(T& t)//只要模板类有show方法 他都支持
{
    t.show();
    cout<<"调用了func(AA<T>& t)\n";

    return t;
}


int main()
{
    //AA<int,string>aa(3,"aaa");//调用时会优先使用普通函数版本
    AA<char,string>aa(3,"aaa");//调用函数模板版本

    BB bb;

    func(aa);
    func(bb);

    return 0;
}