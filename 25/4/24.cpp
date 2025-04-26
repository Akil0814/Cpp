//给你一个整数数组 nums，判断是否存在一个连续子数组，它的和为 0。

#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    bool hasZeroSumSubarray(vector<int>& nums) {
        unordered_set<int> seen;
        int prefixSum = 0;

        for (int num : nums) {
            prefixSum += num;

            if (prefixSum == 0 || seen.count(prefixSum)) {
                return true;
            }

            seen.insert(prefixSum);
        }

        return false;
    }
};

