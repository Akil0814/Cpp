//智能指针
//智能指针是类模板，在栈上创建智能指针对象
//把普通指针交给智能指针
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
    //AA* p=new AA("akil");//new返回对象地址储存在p中
    //unique_ptr<AA>pu1(p);//让智能指针pu1来管理对象//pu1指向了new出来的指针p
    //会自动调用析构函数
    unique_ptr<AA>pu1(new AA("akil"));//可以不使用普通指针直接创建//原理和上面相同

    //unique_ptr<AA>pu1=make_unique<AA>("akil");//c++14标准

    //unique_ptr<AA> pu2 = p;              // 错误，不能把普通指针直接赋给智能指针
	//unique_ptr<AA> pu3 = new AA("西施"); // 错误，不能把普通指针直接赋给智能指针
	//unique_ptr<AA> pu2 = pu1;           // 错误，不能用其它unique_ptr拷贝构造
	//unique_ptr<AA> pu3;
	//pu3 = pu1;                            // 错误，不能用=对unique_ptr进行赋值


    cout<<"m_name="<<(*pu1).m_name<<endl;
    cout<<"m_name="<<pu1->m_name<<endl;
    //cout<<"m_name="<<(*p).m_name<<endl;
    //cout<<"m_name="<<p->m_name<<endl;

    //delete p;

    return 0;
}
