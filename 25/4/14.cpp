//左右值的练习
#include <iostream>
using namespace std;

int main()
{
    int a=10;
    //int* ptr=&a;
    //cout<<*(&++a)<<endl;//++a返回的是值的引用 是左值 可以进行赋值取地址等操作
    //cout<<*(&a++)<<endl;//非法操作//a++ 返回的是值的副本 是右值临时对象 但是自增操作仍然是对变量本身执行的
    cout<<(++a)++<<endl;
    cout<<a<<endl;

    int b=3;
    //b++=10;//b++返回临时对象 不能对右值进行赋值操作
    ++b=10;// 先执行++b 然后进行赋值操作
    //++b是一个表达式 必须先求值

    cout<<b<<endl;




    return 0;
}
