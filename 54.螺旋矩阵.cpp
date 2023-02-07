// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i = 0, x = 0, y = 0, xloop = matrix.size(), yloop = matrix[0].size();
        vector result = vector(xloop * yloop,0);
        while (i < result.size())
        {
            if (yloop > 0)
            {
                for(int step = 0; step < yloop -1; step++)
                {
                    result[i] = matrix[x][y];
                    y++;
                    i++;
                }
            }
            
            if (xloop > 0)
            {
                for(int step = 0; step < xloop - 1; step++)
                {
                    result[i] = matrix[x][y];
                    x++;
                    i++;
                }
            }
            
            if (yloop > 0 && xloop != 1)
            {
                for(int step = 0; step < yloop - 1; step++)
                {
                    result[i] = matrix[x][y];
                    y--;
                    i++;
                }
            }
            if (xloop > 0 && yloop != 1)
            {
                for(int step = 0; step < xloop - 2; step++)
                {
                    result[i] = matrix[x][y];
                    x--;
                    i++;
                }
            }
            
            if(i < result.size())
            result[i] = matrix[x][y];
            y++;
            i++;
            xloop -= 2;
            yloop -= 2;
        }
        return result;
    }
};
// @lc code=end

