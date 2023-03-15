#include <vector>

using namespace std;
/*
 * @lc app=leetcode.cn id=1615 lang=cpp
 *
 * [1615] 最大网络秩
 */

// @lc code=start
class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<vector<int>> rd = vector(n,vector(n,0));
        vector<int> roadNum = vector(n,0);
        for(vector<int> road : roads)
        {
            rd[min(road[0],road[1])][max(road[0],road[1])] = 1;
            roadNum[road[0]]++;
            roadNum[road[1]]++;
        }

        int maxrank = 0;
        for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) {
                int rank =  roadNum[i] + roadNum[j] - rd[i][j];
                maxrank = max(maxrank,rank);
            }
        }

        return maxrank;
    }
};
// @lc code=end

