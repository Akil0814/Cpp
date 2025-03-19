// 线程
//call_once
//在线程环境中保证函数只被调用一次
#include <iostream>
#include <thread>
#include <windows.h>
#include <mutex>//std::once_flag和std::call_once()函数需要包含这个头文件
using namespace std;

once_flag onceflag;//定义一个onec_flag类型的全局变量


//在线程中 只想调用一次
void once_func(const int num, const string& str)
{
    cout<<"once_func num: "<<num<<" str:"<<str<<endl;
}

void func(int num, const string &str)
{
    //用call_onec调用
    call_once(onceflag,once_func,1,"aaaaaa");//两个线程只会调用一次 once_func

    for (int i = 1; i <= 3; i++)
    {
        cout << "第" << i << " 次,num=" << num << " neam=" << str << endl;
        Sleep(1000);
    }
}

int main()
{
    // 用普通函数创建线程
    thread t1(func, 1, "akill");
    thread t2(func,2,"maiii");

    t1.join();
    t2.join();

    return 0;
}
