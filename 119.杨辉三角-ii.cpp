// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    int comb(int n, int m) {
        if (m > n) {
            return 0; // 如果m大于n，直接返回0
        }
        long ans = 1;
        for (int i = 1; i <= m; ++i) {
            ans = ans * (n - i + 1) / i; // 使用乘除法计算组合数
        }
        return ans;
    }

    vector<int> getRow(int rowIndex) {
        int n = rowIndex;
        vector<int> result;
        for(int m = 0; m <= n; m++)
        {
            result.push_back(comb(n,m));
        }
        return result;
    }
};
// @lc code=end

