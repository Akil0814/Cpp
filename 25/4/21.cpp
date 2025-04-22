#include <iostream>
using namespace std;

int main()
{
    int a=10;
    auto f=[a]()mutable{a+=5;};//mutable只允许修改值的副本//没有mutable则无法编译通过
    f();
    cout<<"a="<<a<<endl;//输出10、

    int b=3;
    auto g=[&b](){b*=4;};//没有修改内部变量 修改的是引用指向的外部变量 不需要mutable
    g();
    cout<<"b="<<b<<endl;//输出12

    return 0;
}
