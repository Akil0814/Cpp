//vector 容器
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a;
    vector<int>v;

    a=1;v.push_back(a);//在容器最后加入元素
    a=3;v.push_back(a);

    cout<<"v=";
    for(int i=0;i<v.size();i++)
        cout<<v[i];
    cout<<endl;


    return 0;
}