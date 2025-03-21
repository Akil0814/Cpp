// 线程
//native_handle//使用原生线程库
//win暂无演示
#include <iostream>
#include <thread>
#include <windows.h>
using namespace std;


void func(int num, const string &str)
{
    for (int i = 1; i <= 3; i++)
    {
        cout << "第" << i << " 次,num=" << num << " neam=" << str << endl;
        Sleep(1000);
    }
}

int main()
{
    thread t1(func, 1, "akill");
    thread t2(func,2,"maiii");

    t1.join();
    t2.join();

    return 0;
}
