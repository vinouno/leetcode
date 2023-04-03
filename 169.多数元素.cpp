// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> numsMap;
        for(int num : nums)
        {
            numsMap[num]++;
            int n = numsMap.count(num);
            if(numsMap[num] > nums.size()/2)
            return num;
        }
        return 0;
    }
};
// @lc code=end

