#include <iostream>
using namespace std;

//类模板

//创建对象时，必须指明具体的数据类型
//使用模板时 数据类型必须适应类模板中的代码
//类模板可以为通用数据类型指定缺省的数据类型
//类的成员函数可以在类外实现
//可以用new创建模板对象
//在程序中 模板类的成员函数使用了才会被实例化 没有被调用就不会被创建

/*
template<class T1,class T2=double>//将缺省值默认为double
AA<int>a;//用模板类AA创建对象a
*/



template<class T1,class T2>
class AA
{
 public:
    T1 ma;  //通用类型用于成员变量
    T2 mb;  //通用类型用于成员变量

    AA(){}
    //通用类型用于成员函数的参数
    AA(T1 a,T2 b):ma(a),mb(b){}

    //通用类型用于成员函数的返回值
    T1 geta()
    {
        T1 a=2;  //同用类型用于成员函数代码中
        return ma+a;
    }

    T2 getb();
};

template<class T1,class T2>//类的成员函数可以在类外实现
T2 AA<T1,T2>::getb()
{
    T1 b=2;  //同用类型用于成员函数代码中
    return mb+b;
}

int main()
{
    AA<int, double>*a=new AA<int, double>(3,4.5);//可以用new创建模板对象

    cout<<"a->geta():"<<a->geta()<<endl;
    cout<<"a->getb():"<<a->getb()<<endl;

    delete a;

    /*
    AA<int, double>a;//用模板类AA创建对象a

    a.ma=20;
    a.mb=28;

    cout<<a.geta()<<endl;
    cout<<a.getb()<<endl;
    */

    return 0;
}
