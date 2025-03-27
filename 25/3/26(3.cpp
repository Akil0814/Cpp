#include <iostream>
using namespace std;

struct BB// 仿函数。
{
	void operator()(int num, const string& message)
    {
		cout << "num=" << num << " " << message << endl;
	}
};

int main()
{
	BB bb;
	bb(11, "aaaaa");// 用对象调用仿函数。
	BB()(12, "bbbbb");// 用匿名对象调用仿函数。

	BB& br = bb;           		// 引用函数
	br(13, "ccccc");		// 用对象的引用调用仿函数。
}
