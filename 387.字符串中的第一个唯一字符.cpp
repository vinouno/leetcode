// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

#include <string>
#include <unordered_map>

using namespace std;
/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> charNum;
        for(char ch : s)
        {
            charNum[ch] ++;
        }
        for(int i = 0; i < s.size(); i++)
        {
            if(charNum[s[i]] == 1)
            return i;
        }
        return -1;
    }
};
// @lc code=end

