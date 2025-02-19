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

//void func(unique_ptr<AA>pp)//不行
void func(unique_ptr<AA>&pp)
{
    cout<<"1 name="<<pp->m_name<<endl;
}

void func(unique_ptr<AA> *pp)
{
    cout<<"2 name="<<(*pp)->m_name<<endl;
}

int main()
{
    AA* p=new AA("akil");
    unique_ptr<AA>pu(p);

    func(pu);//不能传值 没有拷贝构造函数
    func(&pu);//也可以传地址



    return 0;
}
