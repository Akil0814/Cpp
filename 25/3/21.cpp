// 线程
// 线程安全 volatile关键字
//同一进程的多个线程共享该进程中全部的系统资源
//多线程访问同一共享资源时会产生冲突
#include <iostream>
#include <thread>
using namespace std;

volatile int a=0;//共享的全局变量

void func()
{
    for (int i = 1; i <= 100000; i++)
    {
        a++;
    }
}

int main()
{

    //func();
    //func();//最终结果200000

    thread t1(func);//用普通函数创建线程
    thread t2(func);//最终结果100000+ 不到200000

    t1.join();
    t2.join();

    cout<<"a= "<<a<<endl;

    return 0;
}
