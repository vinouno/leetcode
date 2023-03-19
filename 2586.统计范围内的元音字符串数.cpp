#include <vector>
#include <string>
#include <iostream>

using namespace std;
/*
 * @lc app=leetcode.cn id=2586 lang=cpp
 *
 * [2586] 统计范围内的元音字符串数
 */

// @lc code=start
class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int result = 0;
        for(int i = left; i <= right; i++)
        {
            if(words[i][0] == 'a' || words[i][0] == 'e' ||words[i][0] == 'i' || words[i][0] == 'o' ||words[i][0] == 'u')
            ;
            else
            continue;
            if(words[i][words[i].size() - 1] == 'a' || words[i][words[i].size() - 1] == 'e' ||words[i][words[i].size() - 1] == 'i' || words[i][words[i].size() - 1] == 'o' ||words[i][words[i].size() - 1] == 'u')
            {
                result++;
            }
            else
            continue;
        }
        return result;
    }
};
// @lc code=end

