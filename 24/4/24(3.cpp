#include<iostream>
using namespace std;

struct st_figer//创建结构体
{
    char name[24];
    int price;
};

struct st_akil
{
    char name[21];
    int age;
    double weight;
    struct st_figer figer;//结构体中引用结构体
};


int main()
{
    st_akil akil={"akil",19,58.5,{"saber",5}};
    cout<<"name:"<<akil.name<<" age:"<<akil.age<<" with "<<akil.figer.name<<" and "<<akil.figer.price<<endl;
    //akil={"mai",20,48.5,{"02",3}};
    //cout<<"name:"<<akil.name<<" age:"<<akil.age<<" with "<<akil.figer.name<<" and "<<akil.figer.price<<endl;
    //akil.figer={"saber",4};
    //cout<<"name:"<<akil.name<<" age:"<<akil.age<<" with "<<akil.figer.name<<" and "<<akil.figer.price<<endl;//vs2022可以通过

    return 0;
}