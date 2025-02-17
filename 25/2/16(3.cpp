#include<iostream>
#include<unordered_map>
using namespace std;

template<class K, class V>
using umap=std::unordered_map<K,V>;

int main()
{
    umap<int,string>m;

    m.max_load_factor(5);

    m.insert({{1,"AA1"},{2,"AA2"},{3,"AA3"},{4,"AA4"},{5,"AA5"},{6,"AA1"},
            {7,"AA2"},{8,"AA3"},{9,"AA4"},{10,"AA5"},{11,"AA11"}});

    m.emplace(12,"AA12");

    // for(auto& val:m)//遍历整个容器
    //     cout<<val.first<<","<<val.second<<" ";
    // cout<<endl<<endl;


    for(auto it=m.begin();it!=m.end();it++)//遍历整个容器
        cout<<it->first<<","<<it->second<<" ";
    cout<<endl<<endl;

    for(int i=0;i<m.bucket_count();i++)//遍历全部的桶
    {
        cout<<"桶"<<i<<":";
        for(auto it=m.begin(i);it!=m.end(i);it++)//遍历桶中元素
            cout<<it->first<<","<<it->second<<"  ";
        cout<<endl;
    }

    return 0;
}
