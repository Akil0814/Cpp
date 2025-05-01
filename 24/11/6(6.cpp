#include <iostream>
using namespace std;
// 下标运算符的重载

class player
{
private:
  string myname[3];

public:
  string pname;
  player()
  {
    myname[0] = "mai";
    myname[1] = "saber";
    myname[2] = "ZeroTow";
  }
  void show()
  {
    cout << myname[0] << " " << myname[1] << " " << myname[2] << " " << endl;
  }

  string &operator[](int x) // 这种访问方法可以访问并修改内容
  {
    return myname[x];
  }
  const string &operator[](int x) const // 这种访问方法只能访问不能修改
  {
    return myname[x];
  } // 创建常函数使常对象也能访问
};

int main()
{
  player akil;
  const player akil1 = akil;

  akil.show();

  cout << akil1[1] << endl; // 常对象只能访问常函数

  akil[1] = "Altria";
  cout << akil[1] << endl;
  akil.show();

  return 0;
}
