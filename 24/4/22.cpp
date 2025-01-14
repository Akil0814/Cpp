#include<iostream>
#include<string.h>
using namespace std;

struct akil//akil为结构体名称
{
    char name[21];
    int age;
    double weight;
    char sex;
    bool life;
};

//void func(const akil*pst)若不希望实参被修改 可以用const修饰
void func(akil*pst)
{
    strcpy(pst->name,"mai");
    pst->age=20;  
    cout<<pst->name <<pst->age<<endl;
}

akil st_akil={"akil",19,58.4,'x',true};//st_akil为结构体变量名

akil* pst=&st_akil;//结构体指针

int main()
{
    cout<<st_akil.name <<st_akil.age<<endl;//1
    cout<<(*pst).name <<(*pst).age<<endl;//2
    cout<<pst->name <<pst->age<<endl;//3

    func(&st_akil);//4

    return 0;
}