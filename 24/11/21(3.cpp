#include<iostream>
using namespace std;

template<typename T>//一个通用数据类型的模板
T Add(T a,T b)
{
    return a+b;
}

template<typename T1,typename T2>//有两个通用数据模板的代码
void show(T1 age,T2 name)
{
    cout<<"Age:"age<<" Name:"<<name<<endl;
}

int main()
{
    int x=7;
    char y='a';
    //函数模板不会自动进行隐式转化
    //可以规定类型 编译器就会进行隐式转化
    int a=Add<int>(x,y);
    cout<<"x+y="<<a<<endl;


    short myage=20;
    //int myage=20;
    const char* myname="akilll";
    //string myname="akilll";
    show(myage,myname);

    return 0;
}
