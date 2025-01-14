#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

using namespace std;

struct akil
{
    char name[21];
    int age;
    double weight;
    char sex;
    bool life;
}; 

int main()
{
    akil figer[3];//创建结构体数组
    memset(figer,0,sizeof(figer));//清空整个数组

    strcpy(figer[0].name,"mai");figer[0].age=20;figer[0].weight=48.5;figer[0].sex='X';;figer[0].life=true;//对于数组进行初始化
    //figer[1]={"saber",25,56,"x",true};//
    //figer[2]={"02",21,50,"X",true};//vsc报错 vs2022可以运行 

    for(int i=0;i<3;i++)
    {
        cout<<"name: "<<figer[i].name<<", age: "<<figer[i].weight<<", sex: "<<
        figer[i].life<<endl;//打印数组
    }


    return 0;    
}