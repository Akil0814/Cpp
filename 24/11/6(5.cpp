#include<iostream>
using namespace std;
//左移运算符的重载

class player
{
private:
    string pname;
    int HP;
    int MP;
public:
player()
{
    pname="akil";
    HP=100;
    MP=50;
}
  void show()
  {
    cout<<"name: "<<pname<<endl<<"HP: "<<HP<<"MP: "<<MP;
  }
  ostream& operator<<(ostream&cout)//只有一个参数 cout要在对象的右边
{
    cout<<"name: "<<this->pname<<" HP: "<<this->HP<<" MP: "<<this->MP<<endl;
    return cout;
}//左移运算符的重载

};


int main()
{
    player akil;
    akil<<cout<<endl;//左移运算符只用全局函数方式
}
