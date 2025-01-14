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

    void show()
    {
        cout<<"saber Altria"<<endl;
    }

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

        //ptr->show();//无法直接调用saber的show函数
        //需要将基类指针转化为派生类指针

        /****************************************************
        if(id==1)//c风格强制转化，转化前必须保证基类指针目标类型正确
        {
            //saber* ps=ptr;//
            saber* saberptr=(saber*)ptr;//强制类型转化为派生类指针
            saberptr->show();
        }
        //想要调用show
        ***************************************************/


        //把基类指针转化为派生类指针
        saber* saberptr = dynamic_cast<saber*>(ptr);
        //如果转化成功 返回ptr的地址 否则返回空地址
        //dynamic_cast只适用于包含虚函数的类
        if(saberptr!=nullptr)
        {
            saberptr->show();
        }

        delete ptr;
    }
    return 0;
}
