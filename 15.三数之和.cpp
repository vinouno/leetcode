// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int num1 = 0; num1 < nums.size() - 2; num1++)
        {
            if(num1 > 0 && nums[num1] == nums[num1 - 1])
            continue;
            int num2 = num1 + 1;
            int num3 = nums.size() - 1;
            while (num2 < num3)
            {
                if(nums[num1] + nums[num2] + nums[num3] > 0)
                {
                    num3--;
                }
                else if(nums[num1] + nums[num2] + nums[num3] < 0)
                {
                    num2++;
                }
                else
                {   
                    vector<int> temp;
                    temp.push_back(nums[num1]);
                    temp.push_back(nums[num2]);
                    temp.push_back(nums[num3]);
                    result.push_back(temp);
                    while(num2 < num3 && nums[num2] == nums[num2 + 1])
                    num2++;
                    while(num2 < num3 && nums[num3] == nums[num3 - 1])
                    num3--;

                    num2++;
                    num3--;
                }
            }           
        }
        return result;
    }
};
// @lc code=end

