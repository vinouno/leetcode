// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = nums[0], fastIndex = 0, slowIndex = 0, length = 1, minLength = nums.size() + 1;
        if(sum >= target)
        {
            return 1;
        }
        while(fastIndex < nums.size() - 1)
        {
          fastIndex++;
          length++;
          sum += nums[fastIndex];
          while(sum - nums[slowIndex] >= target)
          {
            sum -= nums[slowIndex];
            slowIndex++;
            length --;
          }
          if(sum >= target)
          minLength = (length < minLength)? length : minLength;
        }
        if(minLength == nums.size() + 1)
        {
            return 0;
        }
        return minLength;  
    }
};
// @lc code=end

