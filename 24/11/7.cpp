#include<iostream>
using namespace std;

class player
{
public:
    string name;
    int age;
    int* ptr;    //计划使用堆区内存
player()
{
    ptr=nullptr; //指向空地址
}
~player()
{
    if(ptr)
    delete ptr;  //释放指针内存
}
  void show()
  {
    cout<<"name: "<<name<<endl<<"age: "<<age
    <<"ptr "<<ptr<<endl;
  }
player& operator=(const player& someone)//重载赋值运算符
{
    if(this==&someone)
    return *this;//如果是自己给自己赋值

    age=someone.age;
    name=someone.name;

    if(someone.ptr==nullptr)//如果源对象指针为空，则清空目标对象的内存和指针
    {
        if(ptr!=nullptr)
        {
            delete ptr;//释放内存
            ptr=nullptr;//设置指针为空
        }
    }
    else
    {
        if(ptr==nullptr)
        ptr=new int;
        memcpy(ptr,someone.ptr,sizeof(int));
    }
    cout<<"use operator = \n"<<endl;
    return *this;
}
};


int main()
{
    player akil,mai;
    akil.age=20;
    akil.name="akil";
    akil.show();
    mai.show();

    akil=mai;
    mai.show();

    return 0;
}
