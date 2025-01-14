#include<iostream>
using namespace std;

//关系操作符重载

class player
{
private:
    string pname;
    int HP;
    int MP;
public:
player(string naem,int hp,int mp)
{
    pname=naem;
    HP=hp;
    MP=mp;
}
  void show()
  {
    cout<<"name: "<<pname<<endl;
  }
  bool operator==(const player&someone)//重载关系操作符
  {
    if((HP+MP)==(someone.HP+someone.MP))
    return true;
    return false;
  }

    bool operator>(const player&someone)//重载关系操作符
  {
    if((HP+MP)>(someone.HP+someone.MP))
    return true;
    return false;
  }

    bool operator<(const player&someone)//重载关系操作符
  {
    if((HP+MP)>(someone.HP+someone.MP))
    return true;
    return false;
  }
};


int main()
{
    player akil("akil",100,80);
    player mai("mai",80,100);
    if(akil==mai)
    cout<<" same "<<endl;
    else if(akil>mai)
    cout<<" akil "<<endl;
    else
    cout<<" mai "<<endl;

    return 0;
}
