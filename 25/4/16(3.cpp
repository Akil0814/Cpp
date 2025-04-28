//回调函数练习
#include <iostream>
#include <functional>
using namespace std;

void greet(const string& name)
{
    cout<<"Hello "<<name<<" !"<<endl;
}

void call_me(function<void(const string&)>fn, string str)
{
    fn(str);
}

int main()
{
    //string name="akil";
    string name="mai";
    call_me(greet,name);
    return 0;
}
