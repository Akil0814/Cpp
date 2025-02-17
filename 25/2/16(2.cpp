#include<iostream>
#include<unordered_map>
using namespace std;

template<class K, class V>
using umap=std::unordered_map<K,V>;

int main()
{
    umap<int,string>m;
    m.max_load_factor(2);//默认为1
    cout<<"最大装填因子"<<m.max_load_factor()<<endl;

    m.insert({{1,"AA1"},{2,"AA2"},{3,"AA3"},{4,"AA4"},{5,"AA5"},{6,"AA1"}});
    cout<<"当前桶数："<<m.bucket_count()<<endl;
    cout<<"当前装填因子："<<m.load_factor()<<endl;

    m.insert({{7,"AA2"},{8,"AA3"},{9,"AA4"},{10,"AA5"},{11,"AA11"}});
    cout<<"当前桶数："<<m.bucket_count()<<endl;
    cout<<"当前装填因子："<<m.load_factor()<<endl;




    return 0;
}

