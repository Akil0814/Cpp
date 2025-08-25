// leetcode 58
#include<iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits)
{
    if(digits.empty())
        return {1};

    if(digits.back()!=9)
    {
        digits[digits.back()]=digits[digits.back()]+1;
        return digits;
    }
}

//homi
//cath

int main()
{
    vector<int> d={3};
    for(auto &iter:plusOne(d))
    {
        cout<<iter<<endl;
    }
    return 0;
}
