#include<iostream>
using namespace std;

class player
{
public:
    string name;//用类定义一个变量叫实例化一个对象
    int age;
//普通构造函数
player()
{
    name.clear();//初始化成员变量
    age=0;//初始化成员变量
    cout<<"player()"<<endl;
}
//拷贝构造函数
player(const player &gamer)
{
    name="EX "+gamer.name;//初始化成员变量
    age=gamer.age+1;//初始化成员变量
    cout<<"playerEX()"<<endl;
}
~player()
{
    cout<<"~player()"<<endl;
}

 void show()
    {
        cout<<"naem; "<<name<<", age; "<<age<<endl;
    }
 void set(string naem1,int age1)
    {
        name=naem1;
        age=age1;
    }
};

int main()
{
    player akil;//创建成员变量
    akil.name="akil";
    akil.age=20;
    //player mai(akil);//akil的成员变量被赋值给了mai
    player mai=akil;//akil的成员变量被赋值给了mai

    mai.show();

    return 0;
}
