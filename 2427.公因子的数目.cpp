#include <numeric>

using namespace std;
/*
 * @lc app=leetcode.cn id=2427 lang=cpp
 *
 * [2427] 公因子的数目
 */

// @lc code=start
class Solution {
public:
    int commonFactors(int a, int b) {
        int c = gcd(a,b);
        int result = 0;
        for(int i = 1; i * i <= c; i++)
        {
            if(c % i == 0)
            {
                result++;
                if(i * i != c)
                {
                    result++;
                }
            }
        }
        return result;
    }
};
// @lc code=end

