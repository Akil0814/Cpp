#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main()
{
    list<int> la={8,2,6,4,5};
    for(auto &val:la)
        cout<<val<<" ";
    cout<<endl;

    list<int> lb={3,7,9,10,1};
    for(auto& val:lb)
        cout<<val<<" ";
    cout<<endl;
    
    auto first=lb.begin();//定义迭代器指向链表的开始位置
    first++;//迭代器后移一个节点
    auto last=lb.end();//定义迭代器指向链表的尾后
    last--;//迭代器前移一个节点

    la.splice(la.begin(),lb,first,last);//把链表lb的迭代器连接到la的头部
    //连接链表时会搬动链表结点的指针，不是复制接结点

    for(auto &val:la)
        cout<<val<<" ";
    cout<<endl;

    cout<<"lb,size()="<<lb.size()<<endl;//lb还剩2个元素
    for(auto& val:lb)
        cout<<val<<" ";
    cout<<endl;

    return 0;
}