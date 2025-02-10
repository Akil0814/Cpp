#include<iostream>
using namespace std;

void akil(int a)
{
    cout << a <<" akil akil\n";
}
void mai(int a)
{
    cout << a <<" mai mai\n";
}

void show(void(*pf)(int),int b)
{
    cout<<"start \n";
    pf(b);//使用函数指针调用函数
    cout<<"end\n";
}

int main()
{
    show(akil,1);//函数指针的使用
    show(mai,2);//

    return 0;
}
