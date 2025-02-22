//随机存取
#include <iostream>
#include <fstream>
using  namespace std;
int main()
{
    string filename = R"(W:\Coding\code_text_output\21.txt)";

    ifstream fin;
    fin.open(filename,ios::in);

    if(fin.is_open()==false)
    {
        cout<<"打开文件"<<filename<<"失败"<<endl;
        return 0;
    }

    string buffer;\
    cout<<"文件位置指针："<<fin.tellg()<<endl;
    while(fin>>buffer)
    {
        cout<<"文件位置指针："<<fin.tellg()<<endl;
        cout<<buffer<<endl;
    }
    cout<<"文件位置指针："<<fin.tellg()<<endl;//读取文件结束后文件指针变成-1


    fin.close();

    return 0;
}
