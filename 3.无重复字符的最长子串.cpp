// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int fastIndex = 0, slowIndex = 0, size = 0;
        int maxSize = 0;
        unordered_set<char> words;
        while(fastIndex < s.size())
        {
            if(words.count(s[fastIndex]) == 0)
            {
                words.insert(s[fastIndex]);
                fastIndex++;
                size++;
                if(size > maxSize)
                maxSize++;
            }
            else
            {
                while(words.count(s[fastIndex]) != 0)
                {
                    words.erase(s[slowIndex]);
                    slowIndex++;
                    size--;
                }
            }
        }
        return maxSize;
    }
};
// @lc code=end

