#include<iostream>
using namespace std;

double func(int a,double b,float c,short d)
{
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<endl;
    return b;
}

int main()
{
    double (*pf)(int a,double b,float c,short d);//声明函数指针
    pf=func;
    pf(1,2.4,4.4,2);

    auto pf1=func;//auto自动推导指针类型

    return 0;
}
