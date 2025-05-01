//友元
#include<iostream>
using namespace std;

class player
{
    friend void func();//声明友元函数
    //友元函数可以访问私有成员
public:
    string name;//用类定义一个变量叫实例化一个对象
player()
{
    name="akil";
    age=20;
}
  void showname()
  {
    cout<<"name; "<<name<<endl;
  }

private:
    int age;
  void showage()
  {
    cout<<"age; "<<age<<endl;
  }
};

void func()
{
    player akil;
    akil.showname();
    akil.showage();

}

int main()
{
    func();

    return 0;
}
