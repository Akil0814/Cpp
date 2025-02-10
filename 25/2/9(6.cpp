#include<iostream>
#include<vector>
using namespace std;

class AA
{
public:
    string m_name;

    AA()
    {
        cout << "默认构造函数AA()。\n";
    }
    AA(const string& name):m_name(name)
    {
        cout << "构造函数,name=" << m_name << "。\n";
    }
    AA(const AA& a):m_name(a.m_name)
    {
        cout << "拷贝构造函数,name=" << m_name << "。\n";
    }
    AA& operator=(const AA& a)
    {
        m_name=a.m_name;
        cout << "赋值函数,name=" << m_name <<endl;
    }
    ~AA(){
        cout << "析构函数,name=" << m_name << "。\n";
    }
};
int main()
{
    vector<AA>v;
    cout<<"1: v.capacity()="<<v.capacity()<<endl;
    v.emplace_back("akil");
    cout<<"2: v.capacity()="<<v.capacity()<<endl;
    v.emplace_back("mai");
    cout<<"3: v.capacity()="<<v.capacity()<<endl;
    v.emplace_back("saber");
    cout<<"4: v.capacity()="<<v.capacity()<<endl;

    for(const auto &a:v)//使用&提高性能 防止重复拷贝构造与析构函数  使用const约束防止在循环中不小心改变对象的值
        cout<<a.m_name<<" ";
    cout<<endl;

    return 0;
}

