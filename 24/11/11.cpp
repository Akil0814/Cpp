//重载括号运算符
//也叫仿函数

#include<iostream>
using namespace std;

void show(string str)
{
    cout<<"show:"<<str<<endl;
}

class player
{
public:
 void operator()(string name)
 {
    cout<<"oprater() show:"<<name<<endl;
 }
};

int main()
{
    show("akil");
    player akil;
    akil("akil");

    return 0;
}
