//类型转换
//reinterpret_cast<目标类型>(表达式);
//可以用于不同类型的指针转换
//能够将一种对象类型转换为另一种，不管他们是否有关系
//<目标类型>和(表达式)中必须有一个是指针(引用)类型
//用途：
//改变指针类型
//将指针转换成整型变量 整型与指针占用字节数必须一致 否则转换可能损失精度
//将整型变量转换成指针
#include<iostream>
using namespace std;

void func(void* ptr)
{
    double*pp=static_cast<double*>(ptr)
}

int main()
{
    int ii=10;

    double* pd2=(double*)&ii;    //c风格强制转换
    double* pd2=reinterpret_cast<double*>(&ii);    //支持不同类型的指针转换

    return 0;
}