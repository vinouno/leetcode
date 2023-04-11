// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=1041 lang=cpp
 *
 * [1041] 困于环中的机器人
 */

// @lc code=start
class Solution {
public:
    bool isRobotBounded(string instructions) {
        vector<pair<int,int>> m;
        m.emplace_back(0, 1);
        m.emplace_back(-1, 0);
        m.emplace_back(0, -1);
        m.emplace_back(1, 0);

        int x = 0, y = 0;
        int path = 0;
        string str = instructions + instructions + instructions + instructions;
        for(char ch : str)
        {
            if(ch == 'G')
            {
                x += m[(path % 4 + 4) % 4].first;
                y += m[(path % 4 + 4) % 4].second;
            }
            if(ch == 'L')
            {
                path++;
            }
            if(ch == 'R')
            {
                path--;
            }
        }

        if(x == 0 && y == 0)
        return true;
        else
        return false; 
    }
};
// @lc code=end

