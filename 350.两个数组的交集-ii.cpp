// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> nums;
        vector<int> result;
        for(int num : nums1)
        {
            nums[num]++;
        }
        for(int num : nums2)
        {
            if(nums[num] > 0)
            {
                result.push_back(num);
                nums[num]--;
            }
        }
        return result;
    }
};
// @lc code=end

