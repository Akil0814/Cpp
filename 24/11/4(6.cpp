#include<iostream>
using namespace std;

class player
{
private:
    //static int age;
    //私有静态成员在类外无法访问


public:
    string name;
    static int age;
    //static 关键字把成员变量声明为静态 表示在程序中是共享的
    //静态成员变量不会在创建对象的时候初始化，必须在程序的全局区用代码初始化
player(const string pname,int page)\
{
    name=pname;
    age=page;
    cout<<"player(pnaem page)"<<endl;
}

  void showname()
  {
    cout<<"name; "<<name<<endl;
  }
  void showage()
  {
    cout<<"age; "<<age<<endl;
  }

};

int player:: age=20;
    //static 关键字把成员变量声明为静态 表示在程序中是共享的
    //静态成员变量不会在创建对象的时候初始化，必须在程序的全局区用代码初始化
    //静态成员变量不创建对象也可以访问

int main()
{
    cout<<"player:: age= "<<player:: age<<endl;

    player mai("mai",22);
    player ZeroTow("ZeroTow",18);
    player CC("CC",500);
    mai.showname();mai.showage();
    ZeroTow.showname();ZeroTow.showage();
    CC.showname();CC.showage();

    cout<<"player:: age= "<<player:: age<<endl;

    return 0;
}
