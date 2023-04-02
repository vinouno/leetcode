// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <unordered_map>
#include <functional>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=1039 lang=cpp
 *
 * [1039] 多边形三角剖分的最低得分
 */

// @lc code=start
class Solution {
public:
    int minScoreTriangulation(vector<int>& values) {
        unordered_map<int, int> memo; // memo是用来记录子问题的解，避免重复计算
        int n = values.size();
        function<int(int, int)> dp = [&](int i, int j) -> int { // dp函数是用来计算子问题的解
            if (i + 2 > j) { // 当前的多边形边数小于3，不需要进行三角剖分，得分为0
                return 0;
            }
            if (i + 2 == j) { // 当前的多边形边数等于3，只有一种剖分方式，直接计算得分
                return values[i] * values[i + 1] * values[j];
            }
            int key = i * n + j; // 将子问题的i和j作为key，保存子问题的解
            if (!memo.count(key)) { // 如果当前子问题没有被计算过，进行计算
                int minScore = INT_MAX; // 初始化当前子问题的最小得分
                for (int k = i + 1; k < j; k++) { // 枚举剖分点k，计算最小得分
                    minScore = min(minScore, values[i] * values[k] * values[j] + dp(i, k) + dp(k, j));
                }
                memo[key] = minScore; // 将子问题的解保存到memo中
            }
            return memo[key]; // 返回子问题的解
        };
        return dp(0, n - 1); // 计算整个多边形的最小得分
    }
};

// @lc code=end

