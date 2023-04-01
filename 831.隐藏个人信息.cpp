// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <algorithm>
#include <regex>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=831 lang=cpp
 *
 * [831] 隐藏个人信息
 */

// @lc code=start
class Solution {
public:
    string maskPII(string s) {
        string result;
        int at = s.find('@');
        if(at != string::npos)
        {
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            result = s.substr(0,1) + "*****"+s.substr(at - 1);
        }
        else
        {
            vector<string> country = {"", "+*-", "+**-", "+***-"};
            s = regex_replace(s, regex("[^0-9]"), "");
            result = country[s.size() - 10] + "***-***-" + s.substr(s.size() - 4);
        }
        
        return result;
    }
};
// @lc code=end

