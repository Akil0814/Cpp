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

unique_ptr<AA>func()
{
    unique_ptr<AA>pp(new AA("Akil 3"));
    return pp;
}

int main()
{
    unique_ptr<AA>pu1(new AA("Akil 1"));

    unique_ptr<AA> pu2;
    //pu2=pu1;//错误
    pu2=unique_ptr<AA>(new AA("Akil 2"));//用匿名对象赋值

    cout<<"调用func()之前"<<endl;
    pu2=func();//用函数的返回值赋值
    cout<<"调用func()之后"<<endl;


    return 0;
}
