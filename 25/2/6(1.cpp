//类型转换
//const_cast<>();
//static_cast<>()不能丢掉指针的const和volitale属性，const_cast 可以
#include<iostream>
using namespace std;

void fucn(int* ii)
{

}


int main()
{
    const int* a=nullptr
    ;
    //int* bb=aa;         //const不能隐式丢掉
    int* bb=(int*)aa;     //c风格 强制转换，丢掉const限定符
    int* cc=const_cast<int*>(aa);//C++风格 强制转换，丢掉const限定符

    func(const_cast<int*>(aa));

    return 0;
}