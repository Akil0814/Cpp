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

    AA(const int& age,const string& name):m_age(age),m_name(name)
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
};

int main()
{
    vector<AA> v;//创建vector容器 v 存放AA类

    //AA a(20,"akil");//实例化一个AA类//调用构造函数
    //v.push_back(a);//将类加入vector容器中//调用拷贝构造函数

    v.emplace_back(21,"mai");//直接调用构造函数 不用拷贝

    cout<<"age="<<v[0].m_age<<" name="<<v[0].m_name<<endl;

    return 0;
}