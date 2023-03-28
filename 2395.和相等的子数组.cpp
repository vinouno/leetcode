#include <unordered_set>

using namespace std;
/*
 * @lc app=leetcode.cn id=2395 lang=cpp
 *
 * [2395] 和相等的子数组
 */

// @lc code=start
class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> sum;
        for(int i = 1; i < nums.size(); i++)
        {
            if(sum.count(nums[i] + nums[i - 1]))
            return true;
            else
            sum.insert(nums[i] + nums[i - 1]);
        }
        return false;
    }
};
// @lc code=end

