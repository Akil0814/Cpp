//leetcode 26
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums,bool my)
{
    if(nums.empty())
        return 0;

    int count=1;
    for(int i=1;i<nums.size();)
    {
        if(nums[i]==nums[i-1])
        {
            nums.erase(nums.begin()+i);
        }
        else
        {
            i++;
            count++;
        }
    }

    return count;
}


int removeDuplicates(vector<int>& nums)
    {
    if (nums.empty()) return 0;

    int slow = 0; // 慢指针指向“最后一个唯一元素”
    for (int fast = 1; fast < nums.size(); fast++) {
        if (nums[fast] != nums[slow]) {
            slow++;
            nums[slow] = nums[fast]; // 覆盖
        }
    }
    return slow + 1; // 新长度
}

int main()
{
    vector<int> n={1,2,2,2,3,4,4};

    cout<<removeDuplicates(n)<<endl;

    for(auto &iter:n)
    {
        std::cout<<iter<<endl;
    }

    return 0;
}
