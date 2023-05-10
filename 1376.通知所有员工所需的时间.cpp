#include <vector>
#include <queue>

using namespace std;
/*
 * @lc app=leetcode.cn id=1376 lang=cpp
 *
 * [1376] 通知所有员工所需的时间
 */

// @lc code=start
        class Solution {
        public:
            int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
                int maxTime = 0;
                queue<int> nodes;
                for(int i = 0; i < informTime.size(); i++)
                {
                    if(informTime[i] == 0)
                    {
                        nodes.push(i);
                    }
                }
                while(!nodes.empty())
                {
                    int node = nodes.front();
                    nodes.pop();
                    int time = 0;
                    while(manager[node] != -1)
                    {
                        time += informTime[manager[node]];
                        node = manager[node];
                    }
                    maxTime = max(time, maxTime);
                }
                return maxTime;
            }
        };
// @lc code=end

