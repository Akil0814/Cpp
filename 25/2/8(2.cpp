//vector 容器
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;
    v1={1,2,3,4,5}; //使用统一初始化列表赋值
    cout<<"v1=";
    for(int i=0;i<v1.size();i++)
        cout<<v1[i];
    cout<<endl;

    vector<int> v2;
    v2=v1;          //把容器v1赋值给当前容器
    cout<<"v2=";
    for(int i=0;i<v2.size();i++)
        cout<<v2[i];
    cout<<endl;

    vector<int> v3;
    v3.assign({5,4,3,2,1});  //使用assign函数给当前容器赋值，参数是统一初始化列表
    cout<<"v3=";
    for(int i=0;i<v3.size();i++)
        cout<<v3[i];
    cout<<endl;

    return 0;
}