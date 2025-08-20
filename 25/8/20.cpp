// leetcode 58
#include<iostream>
#include <string>
#include <vector>
using namespace std;

int lengthOfLastWord(string s)
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

int main()
{
    string s="";

    std::cout<<lengthOfLastWord(s);

    return 0;
}
