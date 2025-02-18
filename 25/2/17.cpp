//for_each()函数实现
#include <iostream>
#include<vector>
#include<algorithm>
using  namespace std;

template<typename T>
void zsshow(const T& no)    // 张三的个性化表白函数。
{
	cout << "NO" << no << "：我是一只傻傻鸟。\n";
}

template<typename T>
class czs   // 张三的个性化表白仿函数。
{
public:
	void operator()(const T& no) {
		cout << "NO" << no << "：我是一只傻傻鸟。\n";
	}
};

template<typename T1, typename T2>
void foreach(const T1 first, const T1 last, T2 pfun)
{
	for (auto it = first; it != last; it++)
		pfun(*it);        // 以编号为实参调用类的operator()函数。
}

int main()
{
	vector<int> bh = { 5,8,2,6,9,3,1,7 };   // 存放编号的容器。

	foreach(bh.begin(), bh.end(), zsshow<int>);  // 第三个参数是模板函数。

	foreach(bh.begin(), bh.end(), czs<int>());       // 第三个参数是仿函数。
}
