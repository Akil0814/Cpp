//线程
#include<thread>
#include<iostream>
#include<windows.h>
using namespace std;

void func(int num, const string& str)
{
	for (int i = 1;i <= 10; i++)
	{
		cout << "第" << i << " 次,num=" << num << " neam=" << str << endl;
		Sleep(1000);   // 休眠1秒。
	}
}

//仿函数
class mythread1
{
public:
    void operator()(int num, const string& srt)
    {
        for (int i = 1;i <= 10; i++)
        {
            cout << "第" << i << " 次,num=" << num << " neam=" << str << endl;
            Sleep(1000);   // 休眠1秒。
        }
    }
}



int main()
{
    //用普通函数创建线程
    thread t1(func,1,"akill");
    //thread t2(func,2,"maiii");

    	// 用lambda函数创建线程。
	auto f = [](int num, const string& str)
    {
		for (int ii = 1; ii <= 10; ii++)
		{
            cout << "第" << iI << " 次,num=" << num << " neam=" << str << endl;
			Sleep(1000);   // 休眠1秒。
		}
	};
    thread t3(f,3,"saber");

    //仿函数创建线程
    thread t4(mythread1(),4,"CC")



    cout<<"任务开始\n";
    for(int i=0;i<10;i++)//主线程//其余都是子线程
    {
        cout<<"任务中\n";
        Sleep(1000);//模拟任务所需时间
    }

    cout<<"任务完成"<<endl;

    t1.join();//回收线程资源
    t2.join();
    t3.join();
    t4.join();


    return 0;
}
