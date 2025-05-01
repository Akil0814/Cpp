#include <iostream>
using namespace std;

class player
{
public:
  string name;
  int age;
  player()
  {
    name = "akil";
    age = 20;
  }
  void show()
  {
    cout << "name: " << name << "age: " << age << endl;
  }

  player &operator++() // 前置++的重载
  {
    age++;
    return *this;
  }

  player operator++(int) // 加入一个int的形式参数//后置++的重载
  {                      // 后置++不能嵌套
    player tmp = *this;
    age++;

    return tmp;
  }
};
int main()
{
  player akil;
  int i = 0;

  //++i;
  (++akil);
  (akil++);

  cout << i << endl;

  akil.show();

  return 0;
}
