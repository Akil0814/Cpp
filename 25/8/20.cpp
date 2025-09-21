// leetcode 58
#include<iostream>
#include <string>
#include <vector>
using namespace std;

int lengthOfLastWord(string s,bool my)
{
    if(s.empty())
        return 0;

    int i=0;
    for(i=s.size()-1;s[i]==' ';i--)
    {
        if(i<=0)
            return 0;
    }

    int l=0;

    for(;i>=0;i--)
    {
        if(s[i]==' ')
            break;
        l++;
    }

    return l;
}


int lengthOfLastWord(string s)
{
    int i = s.size() - 1;
    // 跳过末尾空格
    while (i >= 0 && s[i] == ' ') i--;
    // 空格统计长度
    int l = 0;
    while (i >= 0 && s[i] != ' ')
    {
        l++;
        i--;
    }
    return l;
}

int main()
{
    string s="";

    std::cout<<lengthOfLastWord(s);

    return 0;
}
