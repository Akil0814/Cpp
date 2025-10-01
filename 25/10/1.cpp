// leetcode 1518
#include<iostream>
#include<unordered_map>
#include <string>
#include <vector>
using namespace std;

int numWaterBottles(int numBottles, int numExchange)
{
    int bottle_left=numBottles;
    int bottle_full=0;
    int total_drink=numBottles;//先全喝了

    while(bottle_left>=numExchange)//开始不停的换
    {
        bottle_full=bottle_left/numExchange;
        total_drink=total_drink+bottle_full;
        bottle_left=bottle_left%numExchange+bottle_full;
    }

    return total_drink;
}

int main()
{
    std::cout<<numWaterBottles(15,4)<<std::endl;
    return 0;
}
