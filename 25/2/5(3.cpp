//命名空间
#include<iostream>
using namespace std;


//创建命名空间的别名
// namespace 别名=原名；
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

int main()
{
    //使用命名空间中的名字有三种方法
    //使用时 命名空间名+::
    /*
    cout<<"ab="<<aa::ab<<endl;
    aa::func1();
    aa::A1 a;
    a.show();
    */

    //使用using 关键字
    //如果函数中使用了和命名空间中相同的名字 编译会报错
    /*
    using aa::ab;
    using aa::A1;
    using aa::func1;
    cout<<"ab="<<ab<<endl;
    func1();
    A1 a;
    a.show();
    */

    //使用using 编译指令
    using namespace aa;
    cout<<"ab="<<ab<<endl;
    func1();
    A1 a;
    a.show();
    int ab=22;//编译不会报错
    //和命名空间中的ab是局部与全局变量的关系
    //此处的ab将屏蔽命名空间中的ab
    cout<<"ab="<<ab<<endl;
    cout<<"aa::ab="<<aa::ab<<endl;


    return 0;
}