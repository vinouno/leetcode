// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 找出字符串中第一个匹配项的下标
 */

// @lc code=start
class Solution {
public:
    vector<int> getNext(const string s) {
        vector<int> next(s.size());
        next[0] = -1;
        int i = 0, j = -1;
        while (i < s.size() - 1) {
            if (j == -1 || s[j] == s[i]) {
                j++;
                i++;
                next[i] = j;
            } else {
                j = next[j];
            }
        }
        return next;
    }

    int strStr(string haystack, string needle) {
        vector<int> next = getNext(needle);
        int i = 0, j = 0;
        while (i < haystack.size()) {
            if (j == -1 || haystack[i] == needle[j]) {
                i++;
                j++;
                if (j == needle.size()) {
                    return i - j;
                }
            } else {
                j = next[j];
            }
        }
        return -1;
    }
};

// @lc code=end

