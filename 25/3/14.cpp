// 线程
//如果主程序结束 所有子线程都会停止
#include <iostream>
#include <thread>
#include <windows.h>
using namespace std;

void func(int num, const string &str)
{
    for (int i = 1; i <= 5; i++)
    {
        cout << "第" << i << " 次,num=" << num << " neam=" << str << endl;
        Sleep(1000); // 休眠1秒。
    }
}


int main()
{
    // 用普通函数创建线程
    thread t1(func, 1, "akill");
    thread t2(func,2,"maiii");

    t1.detach();//分离子线程，系统将自动回收资源
    t2.detach();//分离后的子线程不能join


    Sleep(7000); //分离后主线程不能直接结束 主线程结束会导致子线程结束

    return 0;
}
