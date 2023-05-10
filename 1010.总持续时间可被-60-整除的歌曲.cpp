// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=1010 lang=cpp
 *
 * [1010] 总持续时间可被 60 整除的歌曲
 */

// @lc code=start
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int> m;
        int result = 0;
        for(int t : time)
        {
            if(t % 60 == 0)
            result += m[0];
            else
            result += m[60 - t % 60];
            m[t % 60]++;
        }
        return result;
    }
};
// @lc code=end

