// leetcode 66
#include<iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits)
{
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        if (digits[i] != 9)
        {
            digits[i]++;
            return digits;   // 没有进位，加一直接返回
        }
        digits[i] = 0; // 进位，当前位清零
    }
    digits.insert(digits.begin(), 1);
    return digits;
}


int main()
{

    return 0;
}
