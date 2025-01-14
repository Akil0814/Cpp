#include<iostream>
using namespace std;
struct st_player
{
    string name;
    int age;
    void setvalue(string name1,int age1)
    {
        name=name1;age=age1;
    }
    void show()
    {
        cout<<"naem; "<<name<<", age; "<<age<<endl;
    }
};

int main()
{
    st_player akil;
    akil.setvalue("akil",20);
    akil.show();

    return 0;
}  