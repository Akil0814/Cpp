#include<iostream>
using namespace std;
struct st_figer
{
    char name[21];
    int hight[2][3]={11,12,13,21,22,23};//存放3个高度
    int age;
    double weight;
    char sex;
    bool exp;
};

void func(st_figer*pst)
{
    for(int x=0;x<2;x++)
        for(int y=0;y<3;y++)
            cout<<"figer.hight["<<x<<"]["<<y<<"]="<<pst->hight[x][y]<<endl;//对于二维数组内容进行打印
}

int main()//在结构体中嵌入二维数组
{
    st_figer figer;
    func(&figer);
 
    return 0;
}  