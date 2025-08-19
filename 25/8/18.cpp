//leetcode 13
#include<iostream>
using namespace std;


int getValue(char c)
{
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return 0;
    }
}

int romanToInt(string s)
{
    int res = 0;
    int prev = 0;//记录前一个数

    for (auto it = s.rbegin(); it != s.rend(); ++it)
    {
        char c = *it;
        int cur = getValue(c);
        if (cur < prev)
            res -= cur;
        else
            res += cur;

        prev = cur;

    }
    return res;
}

int main()
{
    string s="MCMXCIV";
    //cin>>s;
    cout<<romanToInt(s);
}
