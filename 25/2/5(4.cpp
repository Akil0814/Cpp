//命名空间
//命名空间是全局的 可以分布在多个文件中
//命名空间可以嵌套
//在命名空间中声明全局变量，而不是使用外部全局变量和局部变量
//uisng声明首选放在局部

#include<iostream>
using namespace std;

namespace//匿名的命名空间
//如果命名空间没有名字 里面的名称在当前文件中可以直接使用 在别的文件中无法访问
{
    int i=22;
}

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