#include <iostream>
#include <vector>
#include <regex>

using namespace std;
/*
 * @lc app=leetcode.cn id=1023 lang=cpp
 *
 * [1023] 驼峰式匹配
 */

// @lc code=start
class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        pattern = "^[a-z]*" + regex_replace(pattern, regex(""), "[a-z]*") + "$";
        regex r(pattern);
        vector<bool> result;
        for (const string & query : queries) {
            result.push_back(regex_match(query, r));
        }
        return result;
    }
};
// @lc code=end

