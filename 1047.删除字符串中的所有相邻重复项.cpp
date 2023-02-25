// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <stack>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=1047 lang=cpp
 *
 * [1047] 删除字符串中的所有相邻重复项
 */

// @lc code=start
class Solution {
public:
    string removeDuplicates(string s) {
        string result;
        for(char ch: s)
        {
            if (result.back() != ch || result.empty())
            {
                result.push_back(ch);
            }
            else
            result.pop_back();
        }
        return result;
    }
};
// @lc code=end

