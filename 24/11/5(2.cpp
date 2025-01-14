#include<iostream>
using namespace std;

class my;//1 前置类声明

class me//2 把友元类放在包含的类之前
{
public:
  void showname(const my&mai);
  void showage(const my&mai);
};

class my
{
    friend void me:: showname(const my&mai);
    friend void me:: showage(const my&mai);//4 声明友元函数
    //友元函数可以访问私有成员
public:
    string name;
my() {name="mai";age=22;}
  void showname() {cout<<"name; "<<name<<endl;}
private:
    int age;
  void showage() {cout<<"age; "<<age<<endl;}
};

void me:: showname(const my&mai) {cout<<"name; "<<mai.name<<endl;}//3 将函数定义放在包含类的后面
void me:: showage(const my&mai) {cout<<"age; "<<mai.age<<endl;}


void func()
{
    my mai;
    me akil;
    akil.showname(mai);
    akil.showage(mai);

}

int main()
{
    func();

    return 0;
}
