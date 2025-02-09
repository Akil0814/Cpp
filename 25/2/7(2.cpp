//vector 容器
#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int>v={1,2,3};
    cout<<"v.capacity()="<<v.capacity()<<",v.size()="<<v.size()<<endl;
    cout<<"v=";
    for(int i=0;i<v.size();i++)
        cout<<v[i];
    cout<<endl;
//-----------------------------------------------------------------------------------------------------------
//1) vector(); //创建一个空的vector容器
    vector<int>v1;
    cout<<"v1.capacity()="<<v1.capacity()<<",v1.size()="<<v1.size()<<endl;//缺省不会分配任何空间

//-----------------------------------------------------------------------------------------------------------
//2) explicit vector(const size_t n); // 创建vector容器,元素个数为n(容量和实际大小都是n)
//explicit关键字禁止把这个构造函数当成转换函数来使用
    vector<int>v2(8);
    cout<<"v2.capacity()="<<v2.capacity()<<",v2.size()="<<v2.size()<<endl;//容量和大小都是8

//-----------------------------------------------------------------------------------------------------------
//3) vector(const vector<T>& v);//拷贝构造函数
    vector<int>v3(v);//内容和v相同
    cout<<"v3.capacity()="<<v3.capacity()<<",v3.size()="<<v3.size()<<endl;
    cout<<"v3=";
    for(int i=0;i<v3.size();i++)
        cout<<v3[i];
    cout<<endl;

//-----------------------------------------------------------------------------------------------------------
//4) vector(const size_t n,const T& value);//创建vector容器,元素个数为n,值均为value
    vector<int>v4(5,1);
    cout<<"v3.capacity()="<<v3.capacity()<<",v3.size()="<<v3.size()<<endl;
    cout<<"v4=";
    for(int i=0;i<v4.size();i++)
        cout<<v4[i];
    cout<<endl;

//-----------------------------------------------------------------------------------------------------------
//5) vector(Iterator first,Iterator last);//用迭代器创建vector容器
    vector<int>ve1={1,2,3,4,5,6,7,8,9,10};//初始化
    vector<int>ve2{ve1.cbegin()+2,ve1.cend()-3};

    cout<<"ve2=";
    //auto == std::vector<int>::const_iterator
    for(auto it =ve2.cbegin();it!=ve2.cend();it++)
        cout<<*it<<" ";
    cout<<endl;

//-----------------------------------------------------------------------------------------------------------
//6) vector(vector<T>&& v);//移动构造函数

//-----------------------------------------------------------------------------------------------------------
//7)vector(initializer_list<T>il);//使用统一初始化列表
    vector<int>v5({5,4,3,2,1});//使用初始化列表
    cout<<"v5.capacity()="<<v5.capacity()<<",v5.size()="<<v5.size()<<endl;
    cout<<"v5=";
    for(int i=0;i<v5.size();i++)
        cout<<v5[i];
    cout<<endl;

    vector<int>v6={1,3,5,6,3};//使用初始化列表
    cout<<"v6.capacity()="<<v6.capacity()<<",v6.size()="<<v6.size()<<endl;
    cout<<"v6=";
    for(int i=0;i<v6.size();i++)
        cout<<v6[i];
    cout<<endl;

return 0;
}