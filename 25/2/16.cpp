#include<iostream>
#include<unordered_map>
using namespace std;

template<class K, class V>
using umap=std::unordered_map<K,V>;

int main()
{
    umap<int,string>m;

    cout<<m.bucket_count()<<endl;//空容器有8个桶//vscode默认一个桶

    size_t itmp=m.bucket_count();

    for(int i=0;i<20000;i++)//插入元素
    {
        char name[50];
        sprintf_s(name,"AAA %d",i);
        m.emplace(i,name);

        if(itmp!=m.bucket_count())//如果桶扩展
        {
            cout<<m.bucket_count()<<endl;//显示日志
            itmp=m.bucket_count();
        }
    }


    return 0;
}
