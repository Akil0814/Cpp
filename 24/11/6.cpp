#include<iostream>
using namespace std;

class player
{
    friend player& operator+(player&akil,int score);
    friend player& operator+ (int score,player&someone);
    friend player& operator+ (player&someone,player&someone1);
private:
    int score;
    int Exp;
public:
    string name;//用类定义一个变量叫实例化一个对象
player()
{
    name="akil";
    Exp=100;
    score=100;
}
  void show()
  {
    cout<<"name: "<<name<<"score: "<<score<<endl;
  }
};

//void operator+ (player&someone,int score)
//非成员函数版本运算符重载
player& operator+ (player&someone,int score)//使用友元增加player类中score的值
{
    someone.score=someone.score+score;

    return someone;
}//重载运算符+
player& operator+ (int score,player&someone)//多次重载不同的参数列表
{
    someone.score=someone.score+score;

    return someone;
}//重载运算符+
player& operator+ (player&someone,player&someone1)//多次重载不同的参数列表
{
    someone.score=someone.score+someone1.score;

    return someone;
}//重载运算符+
//operator运算符（参数列表）

int main()
{
    player akil;

    //operator+(akil,30);
    //akil+ 30;//上下两种实现相同
    akil=akil+30+30;//本质是函数的多次调用
    //重载时参数列表需要匹配
    akil=akil+30+akil;

    akil.show();

    return 0;
}
