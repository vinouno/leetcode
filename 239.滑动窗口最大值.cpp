// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <queue>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=239 lang=cpp
 *
 * [239] 滑动窗口最大值
 */

// @lc code=start
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> maxNum;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            if(i >= k && nums[i-k] == maxNum.front())
            maxNum.pop_front();
            if(maxNum.size() == 0)
            maxNum.push_back(nums[i]);
            else
            {
                while(!maxNum.empty() &&nums[i] > maxNum.back())
                {
                    maxNum.pop_back();
                }
                maxNum.push_back(nums[i]);
            }
            if(i >= k - 1)
            result.push_back(maxNum.front());
        }
        return result;
    }
};
// @lc code=end

