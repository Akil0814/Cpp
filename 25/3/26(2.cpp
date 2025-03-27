//可调用对象
#include<iostream>
using namespace std;

using Func=void(int num,const string& name);//普通类型函数的别名
Func show;//声明普通函数
//void show(int num,const string& name)//声明普通函数//效果相同

int main()
{
    show(1,"aaaa");//调用普通函数

    void(*fp1)(int num,const string& name)=show;//声明函数指针 指向普通函数
    void(&fr1)(int num,const string& name)=show;//声明函数引用 引用普通函数
    fp1(2,"bbbb");//用函数指针调用普通函数
    fr1(3,"cccc");//用函数引用调用普通函数

    Func* fp2 = show;// 声明函数指针，指向普通函数
	Func& fr2 = show;// 声明函数引用，引用普通函数
	fp2(4, "dddd");// 用函数指针调用普通函数
	fr2(5, "eeee");// 用函数引用调用普通函数

    return 0;
}

void show(int num,const string& name)
{
    cout<<"num="<<num<<" name="<<name<<endl;
}

//错误 不能用函数类型定义函数的实体
// Func show1(int num,const string& name)
// {
//     cout<<"num="<<num<<" name="<<name<<endl;
// }
