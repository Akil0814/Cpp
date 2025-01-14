#include<iostream>
using namespace std;

class ID
{
public:
    int id=0;

 virtual void show()
 {
    cout<<"ID:"<<id<<endl;
 }
};
class player:public ID
{
public:
    int age=0;
    void show()
    {
        cout<<"player ID:"<<id<<" age:"<<age<<endl;
    }
};


int main()
{
    player akil;
    akil.id=8;
    akil.age=20;
    akil.show();

    ID* pa=&akil;//创建基类指针指向派生类
    pa->show();//默认调用基类的成员函数
    //使用virtual关键字就会访问派生类的同名函数

    return 0;
}
