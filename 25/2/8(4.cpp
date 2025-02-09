//vector 容器
#include<iostream>
#include<vector>
using namespace std;

class AA
{
public:
    int m_age;
    string m_name;
    AA()
    {
        cout<<"默认构造函数AA()\n";
    }

    AA(cosnt int& age,const string& name):m_age(age),m_name(name)
    {
        cout<<"构造函数 name="<<m_name<<endl;
    }

    AA(const AA& g):m_age(g.m_age),m_name(g.m_name)
    {
        cout<<"拷贝构造函数,name="<<m_name<<endl;
    }

    ~AA()
    {
        cout<<"析构函数"<<endl;
    }
}