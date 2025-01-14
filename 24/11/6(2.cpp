#include<iostream>
using namespace std;

class player
{
private:
    int score;
    int Exp;
public:
    string name;
player()
{
    name="akil ";
    Exp=100;
    score=100;
}
  void show()
  {
    cout<<"name: "<<name<<"score: "<<score<<endl;
  }

  player& operator+ (int value)//成员函数版本的重载运算符
  {
    score = score + value;

    return *this;//this解引用是对象自己
  }
};

//重载运算符+

int main()
{
    player akil;
    akil=akil+100;
    akil.show();

    return 0;
}
