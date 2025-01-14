#include<iostream>
using namespace std;

class A
{
public:
 template<typename T>
 A(T a)
 {
     cout<<"a="<<a<<endl;
 }
//不能为析构函数创建模板
 template<typename T>
 //virtual void show(T b)//不能设置函数模板为虚函数
 void show(T b)
 {
     cout<<"b="<<b<<endl;
 }
};

int main()
{
    A aa(4);
    A bb("akil");
    A cc('K');
    aa.show(98);
    aa.show("mai");

    return 0;
}
