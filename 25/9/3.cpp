// leetcode 70
#include<iostream>
#include<unordered_map>
#include <string>
#include <vector>
using namespace std;

int climbStairs(int n,bool my)
{
    if(n<=0)
        return 0;

    vector<int> dp={1,2};
    int index=2;

    while(n>dp.size())
    {
        int tmp=dp[index-1]+dp[index-2];
        dp.push_back(tmp);
        index++;
    }

    return dp[n-1];

}

int climbStairs(int n)
{
    if (n <= 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    int a = 1, b = 2;
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}


int main()
{
    int x=5;

    std::cout<<climbStairs(x)<<std::endl;

    return 0;
}
