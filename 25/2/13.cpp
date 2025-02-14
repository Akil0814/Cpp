#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m({{20,"akil"},{19,"02"},{21,"mai"},{22,"saber"}});
    for(auto& val:m)
        cout<<val.first<<" "<<val.second<<"; ";
    cout<<endl;

    cout<<"m[20] "<<m[20]<<endl;//显示key为20的元素

    cout<<"m[23] "<<m[23]<<endl;//显示key为22的元素,元素不存在将添加新元素
    for(auto& val:m)
        cout<<val.first<<" "<<val.second<<"; ";
    cout<<endl;

    m[23]="yukino";//修改key值为23的元素
    for(auto& val:m)
        cout<<val.first<<" "<<val.second<<"; ";
    cout<<endl;

    m[500]="CC";//添加新的键值对
    for(auto& val:m)
        cout<<val.first<<" "<<val.second<<"; ";
    cout<<endl;
    

    return 0;
}