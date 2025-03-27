//原子类型 atomic
#include <iostream>
#include <thread>
#include<atomic>
using namespace std;

int main()
{
    atomic<int>ii=3;//原子变量
    int expect=3;//期待值
    int val=5;//打算存入原子变量的值
    //比较原子变量的值和预期值expect
    //如果当两个值相等 把val存储到原子变量中
    //如果当两个值不相等
    //执行存储操作时返回true，否则返回false
    bool bret=ii.compare_exchange_strong(expect,val);
	cout << "bret=" << bret << endl;
	cout << "ii=" << ii << endl;
	cout << "expect=" << expect << endl;


    return 0;
}
