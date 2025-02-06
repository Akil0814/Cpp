//类型转换
//reinterpret_cast<目标类型>(表达式);
//可以用于不同类型的指针转换
//能够将一种对象类型转换为另一种，不管他们是否有关系
//不能丢掉指针的const和volitale属性
//<目标类型>和(表达式)中必须有一个是指针(引用)类型
//用途：
//改变指针类型
//将指针转换成整型变量 整型与指针占用字节数必须一致 否则转换可能损失精度
//将整型变量转换成指针
#include<iostream>
using namespace std;

void func(void* ptr)
{
    long long ii=reinterpret_cast<long long>(ptr);
    cout<<"ii="<<ii<<endl;
}

int main()
{
    long long ii=10;
    
    //func(ii);//不能直接传变量ii 类型不兼容

    func(reinterpret_cast<void*>(ii));//转换类型

    return 0;
}