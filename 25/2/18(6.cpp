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

unique_ptr<AA>pu1(new AA("akil"));

int main()
{
    unique_ptr<AA>pu2(new AA("mai"));

    exit(0);//使用exit退出 全局unique_ptr可以自动释放 但是局部unique_ptr无法释放
    //return 0;
}
