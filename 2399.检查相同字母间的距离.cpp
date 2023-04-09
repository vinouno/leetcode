#include <string>
#include <vector>

using namespace std;
/*
 * @lc app=leetcode.cn id=2399 lang=cpp
 *
 * [2399] 检查相同字母间的距离
 */

// @lc code=start
class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int> words(26,-1);
        for(int i = 0; i < s.size(); i++)
        {
            int x = s[i] - 'a';
            if(words[x] == -1)
            {
                words[x] = i;
            }
            else if(i - words[x] - 1 != distance[x])
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

