#include <vector>
#include <unordered_map>

using namespace std;
/*
 * @lc app=leetcode.cn id=2404 lang=cpp
 *
 * [2404] 出现最频繁的偶数元素
 */

// @lc code=start
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> m;
        int result = -1;
        for(int num : nums)
        {
            if(num % 2 == 0)
            {
                m[num]++;
                if(m[num] > m[result])
                {
                    result = num;
                }
                if(m[num] == m[result] && num < result)
                {
                    result = num;
                }
            }
        }
        return result;
    }
};
// @lc code=end

