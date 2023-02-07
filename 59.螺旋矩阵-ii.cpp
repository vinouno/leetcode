// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n,vector(n,0));
        int i = 1, x = 0, y = 0, loop = n;
        while (loop > 0)
        {
            for(int step = 0; step < loop -1; step++)
            {
                result[x][y] = i;
                y++;
                i++;
            }
            for(int step = 0; step < loop - 1; step++)
            {
                result[x][y] = i;
                x++;
                i++;
            }
            for(int step = 0; step < loop - 1; step++)
            {
                result[x][y] = i;
                y--;
                i++;
            }
            for(int step = 0; step < loop - 2; step++)
            {
                result[x][y] = i;
                x--;
                i++;
            }
            result[x][y] = i;
            y++;
            i++;
            loop -= 2;
        }
        return result;
    }
};
// @lc code=end

