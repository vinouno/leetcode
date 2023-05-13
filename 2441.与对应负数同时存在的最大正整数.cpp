#include <vector>
#include <cmath>
#include <unordered_set>

using namespace std;
/*
 * @lc app=leetcode.cn id=2441 lang=cpp
 *
 * [2441] 与对应负数同时存在的最大正整数
 */

// @lc code=start
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> m;
        int result = -1;
        for(int num : nums)
        {
            m.insert(num);
            if(abs(num) > result && m.find(-num) != m.end())
            {
                result = abs(num);
            }
        }
        return result;
    }
};
// @lc code=end

