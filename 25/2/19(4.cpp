//智能指针
//weak_ptr
// weak_ptr指向由shared_ptr管理的资源但不影响资源的生命周期
//将 weak_ptr绑定到一个shared_ptr不会改变shared_ptr的引用计数
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
	shared_ptr<AA> pa = make_shared<AA>("akil");
	shared_ptr<BB> pb = make_shared<BB>("mai");

	cout << "pa.use_count()=" << pa.use_count() << endl;
	cout << "pb.use_count()=" << pb.use_count() << endl;

	pa->m_p = pb;
	pb->m_p = pa;

	cout << "pa.use_count()=" << pa.use_count() << endl;
	cout << "pb.use_count()=" << pb.use_count() << endl;//weekptr不会增加引用计数

    return 0;
}
