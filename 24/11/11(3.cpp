#include <iostream>
using namespace std;

class CreatePlayer // 基类
{
public:
  string create_name;
  int create_age;
  CreatePlayer()
  {
    create_name = "someone";
    create_age = 0;
  }

  void show()
  {
    cout << "name: " << create_name << "age: " << create_age << endl;
  }

  void setname(const string &name)
  {
    create_name = name;
  }

  void setage(const int &age)
  {
    create_age = age;
  }
};
// 定义player类继承CreatePlayer类
class player : public CreatePlayer // 派生类//派生类拥有积累的成员，还可以定义新的成员
{
public:
  int EXP;
  player()
  {
    EXP = 0;
  }
  void show()
  {
    cout << "name: " << create_name << "age: " << create_age << "EXP: " << EXP << endl;
  }
};

int main()
{
  player akil;
  akil.setname("akil");
  akil.show();

  return 0;
}
