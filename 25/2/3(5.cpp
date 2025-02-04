#include<iostream>
using namespace std;

void show()
{
    cout<<"调用了show()\n";
}

class BB
{
public:
    void operator()()//重载括号运算符(仿函数)
    {
        cout<<"调用了BB类仿函数\n";
    }
};

//函数模板 参数和返回值类型是任意类型
template<typename T>
void func(T tt)
{
    tt();
}

int main()
{
    BB bb;
    func(bb);//实参是类
    func(show);//传show函数 函数名 也是函数指针//实参是函数指针

    return 0;
}