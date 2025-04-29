// leetcode 1
#include <iostream>
#include<unordered_map>
#include <vector>
using namespace std;

class Solution
{
private:
    int num;

public:
    vector<int> twoSum_1(vector<int> &nums, int target)
    {
        num = nums.size();
        for (int i = 0; i < num; i++)
        {
            for (int j = i + 1; j < num; j++)
            {
                if (nums[i] + nums[j] == target)
                    return {i, j};
            }
        }
        return {};
    }

    vector<int> twoSum_2(vector<int> &nums, int target)
    {

        vector<int> v;
        int i = 0;
        while (i < num) 
        {
         for (int j = 0; j < v.size(); j++)
        {
           if (v[j] == nums[i]) return {j, i};
        }
        int other = target - nums[i];
        v.push_back(other);
        i++;
       }
    }


    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> hash;
        //记录 下标 和需要加合的数字
        for (int i = 0; i < nums.size(); ++i)
        {
            int other = target - nums[i];

            if (hash.count(other))//查找是否有出现过
            {
                return {hash[other], i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};
int main()
{
    vector<int> nums;
    int n, target;

    cout << "请输入数组元素个数: ";
    cin >> n;

    cout << "请输入数组元素: ";
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << "请输入目标值 target: ";
    cin >> target;

    Solution s;
    vector<int> result = s.twoSum(nums, target);

    if (!result.empty())
    {
        cout << "找到的两个下标是: " << result[0] << " 和 " << result[1] << endl;
    }
    else
    {
        cout << "没有找到符合条件的两个数。" << endl;
    }

    return 0;
}
