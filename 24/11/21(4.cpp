#include <iostream>
using namespace std;

// 函数模板支持重载
// 函数模板可以有包含非通用类型的参数
template <typename T1, typename T2>
void func(T1 a, T2 b)
{
    cout << "func(T1 a,T2 b)" << endl;
}

template <typename T1, typename T2>
void func(T1 a, T2 b, int c)
{
    cout << "func(T1 a,T2 b,int c)" << endl;
}

template <typename T1>
void func(T1 a)
{
    cout << "func(T1 a)" << endl;
}

int main()
{
    func(1);
    func(1, 2);
    func(1, 2, 4);

    return 0;
}
