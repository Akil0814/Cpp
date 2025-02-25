#include<iostream>
using namespace std;

int main()
{
    //->指定返回类型
    //可以在函数体中使用父作用域的局部变量
    auto f=[](const int& no)->double{
        cout<<"auto f[] "<<no<<endl;
        return 3.21;
    };

    f(312);

    return 0;
}
