//queue容器
#include <iostream>
#include <queue>
#include <deque>
#include <list>
using  namespace std;

class girl
{
public:
	int m_bh;
	string m_name;
	girl(const int& bh, const string& name) : m_bh(bh), m_name(name)
    {}
};

int main()
{
	// template <class T, class _Container = deque<T>>
	// class queue {
	//	 ……
	// }
	// 第一个模板参数T：元素的数据类型。
	// 第二个模板参数_Container：底层容器的类型，缺省是std::deque，可以用std::list，还可以用自定义的类模板。

	queue<girl, list<girl>> q;        // 物理结构为链表。
	//queue<girl, deque<girl>> q;     // 物理结构为数组。
	//queue<girl> q;                  // 物理结构为数组。
	//queue<girl, vector<girl>> q;    // 物理结构为vector，不可以。

	q.push(girl(3, "西施"));  // 效率不高。
	q.emplace(8, "冰冰");     // 效率更高。
	q.push(girl(5, "幂幂"));
	q.push(girl(2, "西瓜"));

	while (q.empty() == false)//使用循环 使元素出队
	{
		cout << "编号：" << q.front().m_bh << "，姓名：" << q.front().m_name << endl;
		q.pop();
	}
}
