// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子数组和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> sum = vector(nums.size() + 1, 0);
        int result = nums[0];
        for (int i = 1; i <= nums.size(); i++)
        {
            sum[i] = max(nums[i-1] + sum[i-1], nums[i-1]);
            result = max(result, sum[i]);
        }
        return result;
    }
};
// @lc code=end

