// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int leftBorder = -2;
        int rightBorder = -2;
        while(left <= right)
        {
            int middle = left + ((right - left) / 2);
            if (nums[middle] < target)
            {
                left = middle + 1;
            }
            else
            {
                right = middle - 1;
                leftBorder = right;
            }
            int i = 0;
        }


        left = 0;
        right = nums.size() - 1;
        while(left <= right)
        {
             int middle = left + ((right - left) / 2);
            if (nums[middle] > target)
            {
                right = middle - 1;
            }
            else
            {
                left = middle + 1;
                rightBorder = left;
            }
        }
        if (leftBorder == -2 || rightBorder == -2) return {-1, -1};
        // 情况三
        if (rightBorder - leftBorder > 1) return {leftBorder + 1, rightBorder - 1};
        // 情况二
        return {-1, -1};
    }
};
// @lc code=end

