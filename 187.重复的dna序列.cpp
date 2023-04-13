// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=187 lang=cpp
 *
 * [187] 重复的DNA序列
 */

// @lc code=start
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> m;
        vector<string> result;
        if(s.size() < 10)
        return result;
        for(int i = 0; i < s.size() - 9; i++)
        {
            string str = s.substr(i,10);
            if(m[str] == 1)
            {
                result.push_back(str);
            }
            m[str]++;
        }
        return result;
    }
};
// @lc code=end

