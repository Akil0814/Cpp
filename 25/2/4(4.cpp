#include<iostream>
using namespace std;

template<class T1,int len>
class LinkList//链表列模板
{
public:
 T1* m_head;
 int m_len=len;
 void insert()
 {
    cout<<"向链表中插入了一条记录\n";
 }
 void ddelete()
 {
    cout<<"向链表中删除了一条记录\n";
 }
 void update()
 {
    cout<<"向链表中更新了一条记录\n";
 }
};