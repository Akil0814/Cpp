#include<iostream>
using namespace std;
class c_player
{
public:
    string name;
    int age;
    void setvalue(string name1,int age1);
    void show()
    {
        cout<<"naem; "<<name<<", age; "<<age<<endl;
    }
};
void c_player::setvalue(string name1,int age1)
    {
        name=name1;age=age1;
    };
int main()
{
    c_player akil;
    akil.setvalue("akil",20);
    akil.show();
    
    return 0;
}  