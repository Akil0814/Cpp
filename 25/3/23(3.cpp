#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

int aa = 0;
mutex mtx;

void func()
{
	for (int ii = 1; ii <= 1000000; ii++)
    {
        lock_guard<mutex>mlock(mtx);//类似于指针指针 构造函数枷锁 析构函数开锁 自动管理锁
		aa++;
    }
}

int main()
{
	thread t1(func);     // 创建线程t1，把全局变量aa加1000000次
	thread t2(func);     // 创建线程t2，把全局变量aa加1000000次

	t1.join();
	t2.join();

	cout << "aa=" << aa << endl;

    return 0;
}
