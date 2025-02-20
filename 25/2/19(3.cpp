//智能指针 删除器
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

void deletefunc(AA* a)
{    // 删除器，普通函数。
	cout << "自定义删除器 全局函数\n";
	delete a;
}

struct deleteclass               // 删除器，仿函数。
{
	void operator()(AA* a) {
		cout << "自定义删除器 仿函数\n";
		delete a;
	}
};

auto deleterlamb = [](AA* a){// 删除器，Lambda表达式
	cout << "自定义删除器 Lambda\n";
	delete a;
};

int main()
{
	shared_ptr<AA> pa1(new AA("西施a"));//默认删除

	//shared_ptr<AA> pa1(new AA("西施a"), deletefunc);//普通函数删除器
	//shared_ptr<AA> pa2(new AA("西施b"), deleteclass());//仿函数删除器
	//shared_ptr<AA> pa3(new AA("西施c"), deleterlamb);//lambda表达式

	//unique_ptr<AA,decltype(deletefunc)*> pu1(new AA("西施1"), deletefunc);
    // unique_ptr<AA, void (*)(AA*)> pu0(new AA("西施1"), deletefunc);
	//unique_ptr<AA, deleteclass> pu2(new AA("西施2"), deleteclass());
	//unique_ptr<AA, decltype(deleterlamb)> pu3(new AA("西施3"), deleterlamb);
}

