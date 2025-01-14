#include<iostream>
using namespace std;

void func(int no,string str)
{
    cout<<"hello "<<no<<"wellocome to"<<str<<endl;

}

int main()
{
    int bh=3;//编号
    string message ="the world";//输入内容
    func(bh,message);//一般调用函数

    void(*pfunc)(int,string);//声明函数指针
    pfunc =func;//对函数指针赋值，语法为 函数指针名=函数名
    pfunc(bh,message);//用函数指针名调用函数  c++语法
    (*pfunc)(bh,message);//用函数指针名调用函数 c语言语法
    
    return 0;
}