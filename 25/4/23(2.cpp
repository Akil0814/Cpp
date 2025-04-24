//划动窗口问题
#include <iostream>
#include <deque>
#include <vector>
using namespace std;

vector<int> maxInWindow(const vector<int>& nums, int k)
{
    vector<int> result;
    deque<int> dq; // 存储的是元素的下标，不是元素值

    for (int i = 0; i < nums.size(); ++i)
    {
        // Step 1: 弹出所有比当前元素小的尾部元素（它们不可能成为最大值）
        while (!dq.empty() && nums[dq.back()] < nums[i])
        {
            dq.pop_back();
        }

        // Step 2: 把当前元素下标加进去
        dq.push_back(i);

        // Step 3: 如果窗口左边界已经滑出 deque.front()，就弹出
        if (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        // Step 4: 只有当窗口形成后（i >= k-1），才开始记录答案
        if (i >= k - 1) {
            result.push_back(nums[dq.front()]);
        }
    }

    return result;
}

int main() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> result = maxInWindow(nums, k);

    cout << "滑动窗口最大值为：";
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
