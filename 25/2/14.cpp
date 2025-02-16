#include<iostream>
#include<unordered_map>
using namespace std;

template<class K, class V>
using umap= std::unordered_map<K,V>;

int main()
{
    //1 umap();//创建一个空的map容器
    umap<int,string>m1;

//---------------------------------------------------------------------------------------------
    //2 umap(initializer_lits<pair<K,V>>il);//使用统一初始化列表
    //umap<int,string> m2={{20,"akil"},{19,"02"},{21,"mai"},{500,"CC"},{22,"saber"}};
    umap<int,string> m2({{20,"akil"},{19,"02"},{21,"mai"},{500,"CC"},{22,"saber"}});
    //输出：19 02 20 akil 21 mai 22 saber 500 CC //会对数据自动排序
    cout<<"m2:  ";
    for(auto& val:m2)
        cout<<val.first<<" "<<val.second<<" ";
    cout<<endl;

//---------------------------------------------------------------------------------------------
    umap<int,string>m3=m2;//拷贝构造函数
    cout<<"m3:  ";
    for(auto& val:m3)
        cout<<val.first<<","<<val.second<<" ";
    cout<<endl;

//---------------------------------------------------------------------------------------------
    //4 umap(iterator first,iterator last);//用迭代器创建map容器
    auto first=m3.begin();
    first++;
    auto last=m3.end();
    last--;
    umap<int,string>m4(first,last);
    cout<<"m4:  ";
    for(auto& val:m4)
        cout<<val.first<<","<<val.second<<" ";
    cout<<endl;


    return 0;
}
