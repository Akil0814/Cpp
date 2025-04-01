#include <iostream>
#include <functional>
using namespace std;

// 普通函数
void show(int num, const string& str)
{
	cout << "num=" << num << " name=" << str << endl;
}

int main()
{
    function<void(int num,const string& str)> fn1=show;
    function<void(int num,const string& str)> fn2=bind(show,placeholders::_1,placeholders::_2);
    fn1(1,"aaaaa");
    fn2(2,"bbbbb");

    return 0;
}
