#include<iostream>
using namespace std;

class Characters
{
public:
    int lv;
    int atk;
    virtual void skill1()
    { cout<<"skill 1"<<endl; }
    virtual void skill2()
    { cout<<"skill 2"<<endl; }
};

class saber:public Characters
{
public:
    void skill1()
    { cout<<"saber skill 1"<<endl; }
    void skill2()
    { cout<<"saber skill 2"<<endl; }
};
class archer:public Characters
{
public:
    void skill1()
    { cout<<"archer skill 1"<<endl; }
    void skill2()
    { cout<<"archer skill 2"<<endl; }
};
class lancer:public Characters
{
public:
    void skill1()
    { cout<<"lancer skill 1"<<endl; }
    void skill2()
    { cout<<"lancer skill 2"<<endl; }
};
int main()
{
    int id=0;
    cout<<"saber 1;archer 2;lancer 3:";
    cin>>id;

    //创建基类指针，让它指向派生类对象
    Characters* ptr=nullptr;
    if(id==1)
    {
        ptr=new saber;
    }
    else if(id==2)
    {
        ptr=new archer;
    }
    else if(id==3)
    {
        ptr=new lancer;
    }

    if(ptr!=nullptr)
    {
        ptr->skill1();
        ptr->skill2();
        delete ptr;
    }

    return 0;
}
