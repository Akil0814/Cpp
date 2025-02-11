//map容器
//map容器封装了红黑树，用与查找
//map容器的元素是pair键值对
#include<iostream>
#include<map>
using namespace std;

int main()
{
    //1 map();//创建一个空的map容器
    map<int,string>m1;

    //2 map(initializer_lits<pair<K,V>>il);//使用统一初始化列表
    map<int,string> m2({{20,"akil"},{20,"mai"}})


    return 0;
}