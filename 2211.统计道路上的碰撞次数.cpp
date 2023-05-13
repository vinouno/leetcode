#include <string>

using namespace std;
/*
 * @lc app=leetcode.cn id=2211 lang=cpp
 *
 * [2211] 统计道路上的碰撞次数
 */

// @lc code=start
class Solution {
public:
    int countCollisions(string directions) {
        int result =  directions.size();
        for(int i = directions.size() - 1; i >= 0; i--)
        {
            if(directions[i] == 'R')
            result--;
            else break;
        }
        for(int i = 0; i < directions.size(); i++)
        {
            if(directions[i] == 'L')
            result--;
            else break;
        }
        for(char ch : directions)
        {
            if(ch == 'S')
            result--;
        }

        return result;
    }
};
// @lc code=end

