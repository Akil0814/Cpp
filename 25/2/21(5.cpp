//随机存取
//移动文件指针后的读取操作
#include <iostream>
#include <fstream>
using  namespace std;
int main()
{
    string filename = R"(W:\Coding\code_text_output\1_21.txt)";

    fstream fs;
    fs.open(filename,ios::in|ios::out);

    if(fs.is_open()==false)
    {
        cout<<"打开文件"<<filename<<"失败"<<endl;
        return 0;
    }

    fs.seekg(4);//会跳过前几个字节写入 有可能覆盖换行符

    fs<<"CC";

    cout<<"文件位置指针："<<fs.tellg()<<endl;


    fs.close();

    return 0;
}
