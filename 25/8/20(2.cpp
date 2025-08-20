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
    if(digits.size()=1)
        return {1,0};

}


int main()
{

    return 0;
}
