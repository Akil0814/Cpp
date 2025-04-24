//map容器
//map容器封装了红黑树，用于查找
//map容器的元素是pair键值对
#include<iostream>
#include<map>
using namespace std;

int main()
{
    //1 map();//创建一个空的map容器
    map<int,string>m1;

//---------------------------------------------------------------------------------------------
    //2 map(initializer_lits<pair<K,V>>il);//使用统一初始化列表
    //map<int,string> m2={{20,"akil"},{19,"02"},{21,"mai"},{500,"CC"},{22,"saber"}};
    map<int,string> m2({{20,"akil"},{19,"02"},{21,"mai"},{500,"CC"},{22,"saber"}});
    //输出：19 02 20 akil 21 mai 22 saber 500 CC //会对数据自动排序
    cout<<"m2:  ";
    for(auto& val:m2)
        cout<<val.first<<" "<<val.second<<" ";
    cout<<endl;

//---------------------------------------------------------------------------------------------
    map<int,string>m3=m2;//拷贝构造函数
    cout<<"m3:  ";
    for(auto& val:m3)
        cout<<val.first<<","<<val.second<<" ";
    cout<<endl;

//---------------------------------------------------------------------------------------------
    //4 map(iterator first,iterator last);//用迭代器创建map容器
    auto first=m3.begin();
    first++;
    auto last=m3.end();
    last--;
    map<int,string>m4(first,last);
    cout<<"m4:  ";
    for(auto& val:m4)
        cout<<val.first<<","<<val.second<<" ";
    cout<<endl;


    return 0;
}
