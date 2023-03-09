// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=453 lang=cpp
 *
 * [453] 最小操作次数使数组元素相等
 */

// @lc code=start
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0, min = nums[0];
        for (int i : nums)
        {
            if(i < min)
            min = i;
            sum += i;
        }
        return sum-(min*nums.size());
    }
};
// @lc code=end

