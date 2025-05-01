#include <iostream>
using namespace std;

class player
{
public:
    mutable string name; // 用类定义一个变量叫实例化一个对象
    int age;
    player() : age(20)
    {
        cout << "player()" << endl;
    }
    void show() const // const修饰后函数不能修改成员变量
    {
        name = "mai"; // 使用 mutable关键字 则在成员函数中可以修改他的值
        // age=22;
        cout << "naem; " << name << ", age; " << age << endl;
        show2();
    }
    void show2() const // const函数只能调用const函数
    {
        name = "mai"; // 使用 mutable关键字 则在成员函数中可以修改他的值
        //age=22;
        cout << "naem2; " << name << ", age2; " << age << endl;
    }
    void show3() // 非const 函数可以调用 const函数 与 非const函数
    {
        name = "mai"; // 使用 mutable关键字 则在成员函数中可以修改他的值
        // age=22;
        cout << "naem3; " << name << ", age3; " << age << endl;
        show2();
    }
};

int main()
{
    player akil; // 创建成员变量
    akil.show2();
    //akil.show3();

    return 0;
}
