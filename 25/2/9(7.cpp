//list容器
#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main()
{
    //1 list();//创建一个空list容器
    list<int> l1;
    cout<<"l1.size()="<<l1.size()<<endl;

    //2 list(initializer_list<T> il);//使用同一初始化列表
    list<int> l2({1,2,3,4,5,6,7,8,9,10});
    cout<<"list l2=";
    for(int value:l2)
        cout<<value<<" ";
    cout<<endl;

    //3 list(const list<T> &v);//拷贝构造函数
    list<int>l3(l2);
    cout<<"list l3=";
    for(int value:l3)
        cout<<value<<" ";
    cout<<endl;

    //4 list(iterator first,iterator last)//用迭代器创建list容器
    list<int>l4(l3.begin(),l3.end());//不支持随机访问
    cout<<"list l4=";
    for(int value:l4)
        cout<<value<<" ";
    cout<<endl;

    vector<int>v1={1,2,3,4,5,6,7,8,9,10};
    list<int>l5(v1.begin()+3,v1.end()-2);//用vector容器的迭代器去创建list容器
    cout<<"list l5=";
    for(int value:l5)
        cout<<value<<" ";
    cout<<endl;

    int a1[]={1,2,3,4,5,6,7,8,9,10};
    list<int>l6(a1+2,a1+10-3);//用数组的指针作为迭代器去创建list容器
    cout<<"list l6=";
    for(int value:l6)
        cout<<value<<" ";
    cout<<endl;

    char str[]="hellow world";//定义c风格字符串
    string s1(str+1,str+7);//用c风格字符串创建string容器
    for(auto value:s1)//遍历容器
        cout<<value<<" ";
    cout<<endl;
    cout<<s1<<endl;//以字符串方式显示string容器

    vector<int> v2(l3.begin(),l3.end());//用list迭代器创建vector容器
    for(auto value:v2)//遍历
        cout<<value<<" ";
    cout<<endl;

    return 0;
}