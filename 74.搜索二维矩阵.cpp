// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=74 lang=cpp
 *
 * [74] 搜索二维矩阵
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0, r = matrix.size() * matrix[0].size() - 1;
        while (l < r)
        {
            int mid = (l + r)/2;
            int x = matrix[mid / matrix[0].size()][mid % matrix[0].size()];
            if(x >= target)
            r = mid;
            else
            l = mid + 1;
        }

        if( matrix[l / matrix[0].size()][l % matrix[0].size()] == target)
        return  true;
        else
        return false;
        
    }
};
// @lc code=end

