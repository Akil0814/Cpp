#include<iostream>
using namespace std;

int main()
{
    struct st_roll
    {
        string name="akil";
        int age=19;
        double weight=56.8;
        char sex='x';
        bool live=true;
    };

    struct st_roll stroll;//创建结构体变量
    //结构体关键字  结构体名 结构体变量名

    cout<<"name "<<stroll.name
    << "  age "<<stroll.age<<endl;

    return 0;
}
