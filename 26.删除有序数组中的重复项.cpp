// @before-stub-for-debug-begin
#include <vector>
#include <string>


using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slowIndex = 0;
        for(int fastindex = 1; fastindex < nums.size();fastindex++)
        {
            if(nums[fastindex] != nums[fastindex-1])
            {
                slowIndex++;
                nums[slowIndex] = nums[fastindex];
            }
        }
        return slowIndex + 1;
    }
};
// @lc code=end

