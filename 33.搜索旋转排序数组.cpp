// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=33 lang=cpp
 *
 * [33] 搜索旋转排序数组
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l < r)
        {
            int mid = (l + r)/2;
            if (nums[mid] < nums[r]) 
            r = mid;
            else l = mid + 1;
        }
        
        int p = l;
        r = p - 1, l = 0;
        while (l < r)
        {
            int mid = (l + r)/2;
            if (nums[mid] >= target) 
            r = mid;
            else l = mid + 1;
        }
        if(nums[l] == target)
        return l;

        l = p, r = nums.size() - 1;
        while (l < r)
        {
            int mid = (l + r)/2;
            if (nums[mid] >= target) 
            r = mid;
            else l = mid + 1;
        }
        if(nums[l] == target)
        return l;
        else
        return -1;
    }
};
// @lc code=end

