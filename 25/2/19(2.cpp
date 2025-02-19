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
	shared_ptr<AA> pa0(new AA("akil a"));
	shared_ptr<AA> pa1 = pa0;                       // 用已存在的shared_ptr拷贝构造，计数加1。
	shared_ptr<AA> pa2 = pa0;                       // 用已存在的shared_ptr拷贝构造，计数加1。
	cout << "pa0.use_count()=" << pa0.use_count() << endl;   // 值为3//值为指向对象的指针数量

	shared_ptr<AA> pb0(new AA("mai b"));
	shared_ptr<AA> pb1 = pb0;                      // 用已存在的shared_ptr拷贝构造，计数加1。
	cout << "pb0.use_count()=" << pb0.use_count() << endl;   // 值为2

	pb1 = pa1;      // 资源西施a的引用加1，资源b的引用减1。
	pb0 = pa1;      // 资源西施a的引用加1，资源b的引用成了0，将被释放。

	cout << "pa0.use_count()=" << pa0.use_count() << endl;   // 值为5
	cout << "pb0.use_count()=" << pb0.use_count() << endl;   // 值为5

    return 0;
}
