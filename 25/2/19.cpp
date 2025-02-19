//智能指针
#include<memory>
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
    AA*p=new AA("akil");
    cout<<"p="<<p<<endl;
    shared_ptr<AA>p0(p);
    cout<<"p0.use_conter()="<<p0.use_count()<<endl;//显示p0引用计数的值
    cout<<"p0.get()="<<p0.get()<<endl;

    shared_ptr<AA>p1=p0;

    cout<<"p0.use_conter()="<<p0.use_count()<<endl;//显示p0引用计数的值
    cout<<"p1.use_conter()="<<p1.use_count()<<endl;//显示p1引用计数的值
    cout<<"p1.get()="<<p1.get()<<endl;

    cout<<p0->m_name<<endl;

    return 0;
}
