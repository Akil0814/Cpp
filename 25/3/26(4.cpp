#include <iostream>
using namespace std;

class A//类的成员函数
{
public:
    void show(int num, const string &name)
    {
        cout << "num=" << num << " name=" << name << endl;
    }
};

int main()
{
    A a;
    a.show(1,"akil");

    void(A::*fp1)(int num, const string &name)=&A::show;// 定义类的成员函数的指针
    (a.*fp1)(2,"mai");// 用类的成员函数的指针调用成员函数

    using pFunc=void(A::*)(int num, const string &name);// 类成员函数的指针类型
    pFunc fp2=&A::show;// 让类成员函数的指针指向类的成员函数的地址
    (a.*fp2)(3,"C.C");// 用类成员函数的指针调用类的成员函数


    return 0;
}
