#include<iostream>
using namespace std;
int main()
{
    string str="mai";
    str="sakurajima mai";
    cout<<"int name: ";
    cin>>str;
    if(str== "mai")cout<<"suki(^_^)\n";//可以用==判段字符串内容是否相等
    if(str!="mai")cout<<"ei? dare(-_-)\n";//也可以用！=判段字符串内容是否不同
    str="neam:"+str+" wwww";//可以用+拼接字符串内容
    //如果字符串内容都是常量，不要写（+），如果内容很长，可以分成多行书写
    cout<<str<<endl;

    return 0;

}