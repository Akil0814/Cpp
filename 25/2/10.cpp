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

    la.reverse();//反转链表
    for(auto& val: la)
        cout<<val<<" ";
    cout<<endl;

    la.sort();//链表排序
    for(auto& val: la)
        cout<<val<<" ";
    cout<<endl;

    list<int> lb={3,7,9,10,1};
    lb.sort();//链表排序

    la.merge(lb);//链表归并//归并后lb变空

    for(auto& val:la)
        cout<<val<<" ";
    cout<<endl;




    return 0;
}