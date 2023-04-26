#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
/*
 * @lc app=leetcode.cn id=2418 lang=cpp
 *
 * [2418] 按身高排序
 */

// @lc code=start
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string> hash;
        vector<string> ans;
        for (int i = 0; i < names.size(); ++i) hash[heights[i]] = names[i];
        for (auto &i : hash) ans.push_back(i.second);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

