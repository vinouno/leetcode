// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=566 lang=cpp
 *
 * [566] 重塑矩阵
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size() * mat[0].size() != r * c)
        return mat;
        else
        {
            vector<vector<int>> result = vector(r, vector(c, 0));
            for (int x = 0; x < mat.size() * mat[0].size(); ++x) {
                result[x / c][x % c] = mat[x /  mat[0].size()][x %  mat[0].size()];
            }
            return result;
        }
    }
};
// @lc code=end

