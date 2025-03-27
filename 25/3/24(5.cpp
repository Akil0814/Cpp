//原子类型 atomic
#include <iostream>
#include <thread>
#include<atomic>
using namespace std;

int main()
{
    atomic<int>a=3;//atomic(T val) noexcept//转换函数

    //cup指令提供的标准操作
    cout<<"a="<<a.load()<<endl;//读取原子变量a的值
    a.store(8);//把8存储到原子变量中
    cout<<"a="<<a.load()<<endl;//读取原子变量a的值

    int old;//用于存放原值

    old=a.fetch_add(5);//把原子变量a的值与5相加 返回原值
    cout<<"old="<<old<<" a="<<a.load()<<endl;//读取原子变量a的值

    old=a.fetch_sub(2);//把原子变量a的值与相减 返回原值
    cout<<"old="<<old<<" a="<<a.load()<<endl;//读取原子变量a的值


    return 0;
}
