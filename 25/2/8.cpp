//vector 容器
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;//空容器动态数组的首地址是空
    cout<<"v.data()="<<v.data()<<endl;

    //使用初始化列表创建容器
    vector<int>v2({1,2,3,4,5});
    cout<<"v2.data()="<<v2.data()<<endl;

    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    cout<<endl;

    v2.data()[0]=8;     //数组表示法
    v2.data()[1]=7;     //数组表示法
    *(v2.data()+2)=0;   //指针表示法
    *(v2.data()+3)=9;   //指针表示法

    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    cout<<endl;


    return 0;
}