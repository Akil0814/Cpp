//互斥锁
#include <iostream>
#include <thread>
#include <windows.h>
#include<mutex>//互斥锁类的头文件
using namespace std;

mutex mtx;//创建互斥锁对象 保护cout对象

void func(int num, const string &str)
{
    cout<<"子线程: "<<this_thread::get_id()<<endl;//获取线程id

    for (int i = 1; i <= 3; i++)
    {
        mtx.lock();//上锁
        cout << "第" << i << " 次,num=" << num << " neam=" << str << endl;
        mtx.unlock();//cout后解锁
        Sleep(1000);
    }
}


int main()
{
    thread t1(func,1,"aaaaa");
    thread t2(func,1,"bbbbb");
    thread t3(func,1,"ccccc");
    thread t4(func,1,"ddddd");

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    return 0;
}
