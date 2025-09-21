// leetcode 69
#include<iostream>
#include<unordered_map>
#include <string>
#include <vector>
using namespace std;

int mySqrt(int x,bool slow)
{
    long long i;
    for(i=0;i*i<=x;i++)
    {
        if(i*i==x)
            return i;
    }

    return i-1;
}

int mySqrt(int x)
{
    if (x < 2) return x;
    long long g = x;
    while (g * g > x) {
        g = (g + x / g) / 2;
    }
    return (int)g;
}

int main()
{
    //std::unordered_map map;
    int x=8;
    std::cout<<mySqrt(x);

    return 0;
}
