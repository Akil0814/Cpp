#include <iostream>
#include <fstream>          // ofstream类需要包含的头文件。
#include <unistd.h>
using  namespace std;

int main()
{

    string filename = R"(W:\Coding\code_text_output\2_21.txt)";
    ofstream fout(filename);   // 打开文件。
    fout << unitbuf;

    for (int i = 0; i < 10; i++)  // 循环
    {
        fout << "i=" << i << "AAAAAAAAAAAAAAAAkil\n";
        //fout.flush();      // 刷新缓冲区。
        //endl;//也可以刷新缓冲区
        usleep(100000);    // 睡眠十分之一秒。
    }

    fout.close();  // 关闭文件。
}
