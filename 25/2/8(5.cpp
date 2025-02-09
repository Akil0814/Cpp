//vector 容器的嵌套
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>>vv;  //创建一个vector容器vv 元素的数据类型是vector<int>
    vector<int>v;           //创建一个容器v 将作为容器vv的元素

    v={1,2,3,4,5};   //使用初始化列表给v赋值
    vv.push_back(v); //把容器v作为元素追加到vv中

    v={11,12,13,14,15,16,17};
    vv.push_back(v);

    v={21,22,23};
    vv.push_back(v);

    for(int i=0;i<vv.size();i++)
    {
        for(int j=0;j<vv[i].size();j++)
        {
            cout<<vv[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}