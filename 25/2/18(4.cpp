//智能指针
#include<memory>
#include<vector>
#include<iostream>
using namespace std;

class AA
{
public:
	string m_name;
	AA()
    {
        cout << m_name << "调用构造函数AA()。\n";
    }
	AA(const string & name) : m_name(name)
    {
        cout << "调用构造函数AA("<< m_name << ")。\n";
    }
	~AA()
    {
        cout << m_name << "调用了析构函数~AA(" << m_name << ")。\n";
    }
};


int main()
{
    unique_ptr<AA>pu(new AA("Akil"));

    cout<<"赋值前"<<endl;
    if(pu!=nullptr)
        cout<<"pu不是空的"<<endl;
    pu=nullptr;//指针滞空会释放对象
    cout<<"赋值后"<<endl;
    if(pu==nullptr)
        cout<<"pu是空的"<<endl;

    return 0;
}
