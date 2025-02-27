// 右值引用

// 左值是表达式结束后依然存在的持久化对象 右值是表达式结束后就不在存在的临时对象
// 如果能取地址就是左值
// 纯右值：非引用的临时变量 运算表达式产生的结果 字面常量
// 将亡值：

// 右值引用就是给右值起个名字
//主要目的：实现移动语义
#include <iostream>
using namespace std;

class AA
{
public:
    int m_a = 9;
};

AA getTemp()
{
    return AA();
}

int main()
{
    int &&a = 3; // 3是右值。

    int b = 8;       // b是左值。
    int &&c = b + 5; //  b+5是右值。
    //右值有了名字之后就变成了一个普通的变量

    AA &&aa = getTemp(); // getTemp()的返回值是右值（临时变量）
    //getTemp()的返回值被存到了aa中变成了左值 生命周期变更

    cout << "a=" << a << endl;
    cout << "c=" << c << endl;
    cout << "aa.m_a=" << aa.m_a << endl;
}
