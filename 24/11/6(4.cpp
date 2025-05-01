#include <iostream>
using namespace std;
// 左移运算符的重载

class player
{
  friend ostream &operator<<(ostream &cout, const player &someone);

private:
  string pname;
  int HP;
  int MP;

public:
  player()
  {
    pname = "akil";
    HP = 100;
    MP = 50;
  }
  void show()
  {
    cout << "name: " << pname << endl
         << "HP: " << HP << "MP: " << MP;
  }
};

ostream &operator<<(ostream &cout, const player &someone) // 左移运算符的重载
{
  cout << "name: " << someone.pname << " HP: " << someone.HP << " MP: " << someone.MP << endl;
  return cout;
} // 左移运算符的重载

int main()
{
  player akil;
  cout << akil << endl;
}
