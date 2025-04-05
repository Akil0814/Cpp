#include <iostream>
#include <thread>
#include <functional>
using namespace std;

void show0()
{
	cout << "show0; \n";
}

void show1(const string& message)
{  // 普通函数。
	cout << "message= " << message << endl;
}

struct CC	// 类中有普通成员函数。
{
	void show2(int num, const string& message) {
		cout << "num=" << num << " message= " << message << endl;
	}
};

template<typename Fn,typename ...Args>
void show(Fn fn,Args...args)
{
    cout<<"准备中..."<<endl;
    //function<>=bind(fn,args);//不知道传进来的是什么样的可调用对象
    auto f=bind(fn,args...);
    f();

    cout<<"完成..."<<endl;
}

int main()
{
    show(show0);
    show(show1,"aaaaa");
    CC cc;
    show(&CC::show2,&cc,3,"bbbbb");

    // thread t1(show0);
    // thread t2(show1,"aaaaa");
    // CC cc;
    // thread t3(&CC::show2,&cc,3,"bbbbb");
    // t1.join();
    // t2.join();
    // t3.join();


    return 0;
}
