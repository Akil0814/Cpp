// 可变参数
#include <iostream>
#include <thread>
using namespace std;

void print() // 没有终止函数 代码会报错
{
    cout << "递归终止";
}

template <typename T, typename... Args>
void print(T arg, Args... args)
{
    cout << "参数：" << arg << endl; // 显示本次展开的参数
    cout << sizeof...(args) << "未展开" << endl;
    print(args...);
}

int main()
{
    print("akil", 20, "mai", 22);

    return 0;
}
