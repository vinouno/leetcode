

using namespace std;
/*
 * @lc app=leetcode.cn id=2413 lang=cpp
 *
 * [2413] 最小偶倍数
 */

// @lc code=start
class Solution {
public:
    int smallestEvenMultiple(int n) {
    return n*(1 + n % 2);       
    }
};
// @lc code=end

