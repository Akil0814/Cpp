/*
Two Sum Problem
Given an array of integers and a target number, 
find two numbers in the array that sum to the target. 
Return their indices
*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
    private:
        int num;
    public:
        vector<int> twoSum(vector<int>& nums, int target) 
        {
            num=nums.size();
            for (int i = 0; i < num; i++)
            {
                for (int j = i + 1; j < num; j++)
                {
                    if (nums[i] + nums[j] == target)
                        return{i,j};
                }
            }
            return {};
        }
    };

int main()
{
    Solution Test;

    vector<int>testNum={2, 7, 11, 15};

    vector<int>answer(Test.twoSum(testNum,9));

    for(int iter:answer)
        cout<<iter<<" ";
    
}