#include<iostream>
using namespace std;

class player
{
public:
    string name;
    int age;
player(string pname,int page)
{
    name=pname;
    age=page;
    cout<<"player(pnaem page)"<<endl;
}

  void show() const
    {
        cout<<"naem; "<<name<<", age; "<<age<<endl;
    }
    const player& pk(const player &player1) const//第1，2个const是保持变量名一致 最后的const是对于函数的修饰
    {
        if(player1.age>age) return player1;//返回age最大的成员
        return *this;//在类的每个成员函数中 有个隐藏this指针
        //谁调用成员函数 this指向谁
        //*this this指针解引用可以表示对象
    }
};

/*const player pk(const player &player1,const player &player2)//更像C风格
{
    if(player1.age > player2.age)
        return player1;
    else
        return player2;
}//更像C风格*/

int main()
{
    player mai("mai",22),akil("akil",20),ZeroTow("ZeroTow",18),CC("CC",500);
    //const player &bigger =pk(mai,akil);//C风格
    //const player &bigger =mai.pk(akil);//mai pk akil//this指向mai
    const player &bigger =akil.pk(mai).pk(ZeroTow).pk(CC);//akil pk mai//两项效果一样//this指向akil

    bigger.show();//shou方法必须有const约束才能由有const约束的成员变量使用

    return 0;
}
