#include <vector>
#include <unordered_set>

using namespace std;
/*
 * @lc app=leetcode.cn id=1557 lang=cpp
 *
 * [1557] 可以到达所有点的最少点数目
 */

// @lc code=start
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        unordered_set<int> numSet;

        for (int i = 0; i < n; i++) {
            numSet.insert(i);
        }

        for(vector<int> e : edges)
        {
            numSet.erase(e[1]);
        }
        vector<int> result(numSet.begin(),numSet.end()); 
        return result;
    }
};
// @lc code=end

