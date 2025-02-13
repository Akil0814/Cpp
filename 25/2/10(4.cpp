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
    //map<int,string> m2={{20,"akil"},{19,"02"},{21,"mai"},{500,"CC"},{22,"saber"}};
    map<int,string> m2({{20,"akil"},{19,"02"},{21,"mai"},{500,"CC"},{22,"saber"}});

    cout<<"m2:"<<endl;
    for(auto& val:m2)
        cout<<val.first<<" "<<val.second<<" ";
    cout<<endl;


    return 0;
}