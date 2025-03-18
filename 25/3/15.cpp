// 线程
//this_thread
//表示当前线程
#include <iostream>
#include <thread>
#include <windows.h>
using namespace std;

void func(int num, const string &str)
{
    cout<<"子线程: "<<this_thread::get_id()<<endl;//获取线程id

    for (int i = 1; i <= 3; i++)
    {
        cout << "第" << i << " 次,num=" << num << " neam=" << str << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
}


int main()
{
    // 用普通函数创建线程
    thread t1(func, 1, "akill");
    thread t2(func,2,"maiii");

    cout<<"主线程: "<<this_thread::get_id()<<endl;//获取线程id 在主线程中 会显示主线程id
    cout<<"线程 t1: "<<t1.get_id()<<endl;//获取子线程id
    cout<<"线程 t2: "<<t2.get_id()<<endl;

    t1.join();
    t2.join();

    return 0;
}
