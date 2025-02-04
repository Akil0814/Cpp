//在类模板中创建类模板和函数模板

#include<iostream>
using namespace std;

template<class T1,class T2>
class AA
{
public:
    T1 m_x;
    T2 m_y;
    AA(const T1 x,const T2 y):m_x(x),m_y(y){}

    void show()
    {
        cout<<"m_x="<<m_x<<" m_y="<<m_y<<endl;
    }

    template<class T>
    class BB
    {
    public:
        T m_a;
        T1 m_b;
        BB(){}
        void show();//模板类中的模板类的成员函数可以在类外实现
        /*
        void show()
        {
           cout<<"m_a="<<m_a<<" m_b="<<m_b<<endl;
        }
        */
    };
    BB<string> m_bb;

    template<typename T>//模板类AA的 模板成员函数
    void show(T tt);
    /*
    {
        cout<<"tt="<<tt<<endl;
        cout<<"m_x="<<m_x<<" m_y="<<m_y<<endl;//可以访问AA的成员变量
        m_bb.show();//也可以访问bb的成员
    }
    */

};

template<class T1,class T2>
template<class T>
void AA<T1,T2>::BB<T>::show()//模板类中的模板类的成员函数可以在类外实现
    {
        cout<<"m_a="<<m_a<<" m_b="<<m_b<<endl;
    }

template<class T1,class T2>
template<typename T>//模板类AA的 模板成员函数
void AA<T1,T2>::show(T tt)
    {
        cout<<"tt="<<tt<<endl;
        cout<<"m_x="<<m_x<<" m_y="<<m_y<<endl;//可以访问AA的成员变量
        m_bb.show();//也可以访问bb的成员
    }


int main()
{
    AA<int,string>a(88,"akil");
    a.show();
    a.m_bb.m_a="mai";//给模板类中的模板类的成员变量赋值
    a.m_bb.show();
    a.show("sakurajima");

    return 0;
}