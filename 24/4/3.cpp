#include<iostream>
using namespace std;

void akil()
{
    cout<<"mai\n";
}
void mai()
{
    cout<<"akil\n";
}

void show(void(*pf)())
{
    cout<<"start \n";
    pf();//使用函数指针调用函数
    cout<<"end\n";
}

int main()
{
    show(akil);//函数指针的使用
    show(mai);//

    return 0;
}