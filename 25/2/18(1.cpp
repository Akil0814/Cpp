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


int main()
{
    AA* p=new AA("akil");
    unique_ptr<AA>pu(p);

    cout<<"裸指针的值是："<<p<<endl;
    cout<<"pu输出的结果是："<<pu<<endl;
    cout<<"pu.get输出的结果是："<<pu.get()<<endl;
    cout<<"pu的地址是："<<&pu<<endl;


    return 0;
}
