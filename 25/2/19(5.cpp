#include<memory>
#include<iostream>
using namespace std;

class BB;

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
    weak_ptr<BB>m_p;
    //shared_ptr<BB>m_p;//不会调用析构函数
};

class BB
{
public:
	string m_name;
	BB()
    {
        cout << m_name << "调用构造函数BB()。\n";
    }
	BB(const string & name) : m_name(name)
    {
        cout << "调用构造函数BB("<< m_name << ")。\n";
    }
	~BB()
    {
        cout << m_name << "调用了析构函数~BB(" << m_name << ")。\n";
    }

    weak_ptr<AA>m_p;
    //shared_ptr<AA>m_p;//不会调用析构函数
};
int main()
{

}
