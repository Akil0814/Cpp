//随机存取
#include <iostream>
#include <fstream>
using  namespace std;
int main()
{
    string filename = R"(W:\Coding\code_text_output\21.txt)";

    ofstream fout;
    fout.open(filename,ios::out);//out截断文件中的内容

    if(fout.is_open()==false)
    {
        cout<<"打开文件"<<filename<<"失败"<<endl;
        return 0;
    }

    cout<<"文件位置指针："<<fout.tellp()<<endl;//换行需要2个字节
    fout<<"akil"<<endl;
    cout<<"文件位置指针："<<fout.tellp()<<endl;
    fout<<"mai"<<endl;
    cout<<"文件位置指针："<<fout.tellp()<<endl;
    fout<<"yukino"<<endl;
    cout<<"文件位置指针："<<fout.tellp()<<endl;

    fout.close();

    return 0;
}
