//原子类型 atomic
#include <iostream>
#include <thread>
#include<atomic>
using namespace std;

atomic<int> a=0;//共享的全局变量

void func()
{
    for (int i = 1; i <= 100000; i++)
        a++;
}

int main()
{

    thread t1(func);//用普通函数创建线程
    thread t2(func);//最终结果100000+ 不到200000

    t1.join();
    t2.join();

    cout<<"a= "<<a<<endl;

    return 0;
}
