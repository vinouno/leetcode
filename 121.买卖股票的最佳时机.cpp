// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = prices[0];
        for(int price : prices)
        {
            maxProfit = max(maxProfit, price - minPrice);
            minPrice = min(price , minPrice);
        }
        return maxProfit;
    }
};
// @lc code=end

