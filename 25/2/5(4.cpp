//命名空间

//创建命名空间的别名
//
#include<iostream>
using namespace std;

namespace aa//aa命名空间
{
    int ab=13;//全局变量

    void func1();//全局函数声明

    class A1//类
    {
    public:
        void show();//类的成员函数
    };

    void func1()//全局函数的定义
    {
        cout<<"调用了aa::func()函数\n";
    }

    void A1::show()//成员函数的类外实现
    {
        cout<<"调用了aa::A1::show()函数\n";
    }
}

namespace bb//aa命名空间
{
    int ab=13;//全局变量

    void func1();//全局函数声明

    class A1//类
    {
    public:
        void show();//类的成员函数
    };

    void func1()//全局函数的定义
    {
        cout<<"调用了bb::func()函数\n";
    }

    void A1::show()//成员函数的类外实现
    {
        cout<<"调用了bb::A1::show()函数\n";
    }
}

int main()
{

    ///using namespace aa;
    using namespace bb;

    cout<<"aa::ab="<<aa::ab<<endl;
    cout<<"bb::ab="<<bb::ab<<endl;

    func1();
    A1 a;
    a.show();

    return 0;
}