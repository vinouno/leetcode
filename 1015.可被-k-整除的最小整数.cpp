/*
 * @lc app=leetcode.cn id=1015 lang=cpp
 *
 * [1015] 可被 K 整除的最小整数
 */

// @lc code=start
class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int x = 0;
        for(int i = 1;i <= k; i++)
        {
            x = (x * 10 + 1) % k;
            if(x == 0)
            return i;
        }
        return -1;
    }
};
// @lc code=end

