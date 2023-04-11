// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> words;
        for(string str : strs)
        {
            string key = str;
            sort(key.begin(), key.end());
            words[key].emplace_back(str);
        }

        vector<vector<string>> result;
        for(auto it = words.begin(); it!= words.end(); it++)
        {
            result.emplace_back(it->second);
        }
        return result;
    }
};
// @lc code=end

