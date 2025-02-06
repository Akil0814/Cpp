//类型转换
//c风格: (目标类型)表达式
//C++风格
//static_cast<>();//用于内置数据类型的转化 用于指针间的转换
//const_cast<>();
//reinterpret_cast<>();
//dynamic_cast<>();

#include<iostream>
using namespace std;

int main()
{
/*

    int ii=3;
    long ll=ii; //绝对安全 可以隐式转换 不会出现警告

    double dd=1.23;
    long ll1=dd;    //可以隐式转换 但是会出现可能丢失数据的警告

    long ll2=(long)dd;  //c风格 显示转换 不会出现警告

    long ll3=static_cast<long>(dd);  //C++风格 显示转换 不会出现警告

*/
    int ii=10;

    //double* pd1=&ii;    //错误 不能隐式转换
    double* pd2=(double*)&ii;    //c风格强制转换
    //double* pd2=static_cast<double*>(&ii);    //错误，static_cast不支持不同类型的指针转换

    void* pv=&ii;       //任何类型的指针都录隐式转换成void*
    double* pd4=static_cast<double*>(pv);//static_cast可以把void*转换成其他类型放到指针

    cout<<"pd2="<<pd2<<" *pd2="<<*pd2<<endl;
    cout<<"pv="<<pv<<" *pv="<<"不能解引用"<<endl;
    cout<<"pd4="<<pd4<<" *pd4="<<*pd4<<endl;

    return 0;
}