//bind 绑定器
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

    function<void(const string& str,int num)> fn3=bind(show,placeholders::_2,placeholders::_1);//不能直接用show 参数不匹配
    fn3("ccccc",3);


    function<void(int num)> fn4=bind(show,placeholders::_1,"ddddd");//只用一个参数
    fn4(4);

    return 0;
}
