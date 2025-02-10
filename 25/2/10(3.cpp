//pair 键值对
#include<iostream>
using namespace std;

int main()
{
    pair<int,string>p0;
    cout<<"p0.first="<<p0.first<<" p0.second="<<p0.second<<endl;

    pair<int,string>p1(1,"a1");//两个参数的构造函数
    cout<<"p1.first="<<p1.first<<" p1.second="<<p1.second<<endl;

    auto p2=pair<int,string>(2,"a2");//匿名对象(显示调用构造函数)
    //可以理解为先创建匿名对象 然后用了p2的名字//不会调用拷贝构造函数
    cout<<"p2.first="<<p2.first<<" p2.second="<<p2.second<<endl;

    auto p3=make_pair<int,string>(3,"a3");//make_pair返回临时对象//真实效果和上面一样
    cout<<"p3.first="<<p3.first<<" p3.second="<<p3.second<<endl;


    return 0;
}