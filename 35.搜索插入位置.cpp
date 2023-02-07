// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int result =nums.size();
        while(left <= right)
        {
            int middle = left + ((right - left) / 2);
            if(nums[middle] >= target)
            {
                result = middle;
                right = middle - 1;
            }else
            {
                left = middle + 1;
            }
        }
        return result;
    }
};
// @lc code=end

