#include<iostream>
using namespace std;
struct st_figer
{
    char name[21];
    int hight[3];//存放3个高度
    int age;
    double weight;
    char sex;
    bool exp;
};

int main()//在结构体中嵌入一维数组
{
    st_figer figer;
    for(int x=0;x<3;x++)figer.hight[x]=28+x;
    for(int x=0;x<3;x++)cout<<"figer.hight["<<x<<"]="<<figer.hight[x]<<endl;

    return 0;
}