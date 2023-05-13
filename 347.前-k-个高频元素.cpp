// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem347.h"

using namespace std;
// @before-stub-for-debug-end

#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;
/*
 * @lc app=leetcode.cn id=347 lang=cpp
 *
 * [347] 前 K 个高频元素
 */

// @lc code=start
class Solution {
public:
    struct Compare {
        bool operator()(const std::pair<int, int>& p1, const std::pair<int, int>& p2) {
            return p1.second < p2.second; // 按照值降序排列
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, Compare> myQueue;
        vector<int> result;

        for(int num : nums) {
            m[num]++;
        }

        for(auto p : m) {
            myQueue.push(p);
        }

        while (!myQueue.empty() && k > 0) {
            result.push_back(myQueue.top().first);
            myQueue.pop();
            k--;
        }

        return result;
    }
};

// @lc code=end

