/*
 * @lc app=leetcode.cn id=1823 lang=cpp
 *
 * [1823] 找出游戏的获胜者
 */

// @lc code=start
class Solution {
public:
    int findTheWinner(int n, int k) {
        int p = 0;
        for(int i = 2; i<= n; i++)
        {
            p = (p + k) % i;
        }
        return p+1;
    }
};
// @lc code=end

