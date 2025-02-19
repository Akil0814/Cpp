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

// 函数func1()需要一个指针，但不对这个指针负责//不会管理资源
void func1(const AA* a)
{
	cout << a->m_name << endl;
}

// 函数func2()需要一个指针，并且会对这个指针负责//会释放资源
void func2(AA* a)
{
	cout << a->m_name << endl;
	delete a;
}

// 函数func3()需要一个unique_ptr，不会对这个unique_ptr负责。
void func3(const unique_ptr<AA> &a)
{
	cout << a->m_name << endl;
}

// 函数func4()需要一个unique_ptr，并且会对这个unique_ptr负责。
void func4(unique_ptr<AA> a)
{
	cout << a->m_name << endl;
}

int main()
{
	unique_ptr<AA> pu(new AA("akil"));

	cout << "开始调用函数。\n";
	//func1(pu.get());        // 函数func1()需要一个指针，但不对这个指针负责
	//func2(pu.release());  // 函数func2()需要一个指针，并且会对这个指针负责//失去原始指针的控制权之后 它自己就成了空指针
	//func3(pu);                // 函数func3()需要一个unique_ptr，不会对这个unique_ptr负责
	func4(move(pu));     // 函数func4()需要一个unique_ptr，并且会对这个unique_ptr负责//把对原始指针的控制权交给func4()函数的形参
	cout << "调用函数完成。\n";

	if (pu == nullptr)
        cout << "pu是空指针。\n";
}

