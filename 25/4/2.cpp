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

int main()
{


    // thread t1(show0);
    // thread t2(show1,"aaaaa");
    // CC cc;
    // thread t3(&CC::show2,&cc,3,"bbbbb");

    // t1.join();
    // t2.join();
    // t3.join();


    return 0;
}
