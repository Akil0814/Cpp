#include<iostream>
using namespace std;

class player
{
public:
    string name;//用类定义一个变量叫实例化一个对象
    int age;

player():name("akil"),age(20)//初始化列表赋值
{
    //name="mai"; age=22;//构造函数内再次赋值会导致列表值被覆盖
    cout<<"player()"<<endl;
}
player(string pname,int page):name("EX"+pname),age(page-1)//
{
    name=pname;
    age=page;
    cout<<"player(pnaem page)"<<endl;
}
~player()
{
    cout<<"~player()"<<endl;
}

 void show()
    {
        cout<<"naem; "<<name<<", age; "<<age<<endl;
    }
};

int main()
{
    player akil;//创建成员变量
    player mai("mai",22);
    akil.show();
    mai.show();

    return 0;
}
