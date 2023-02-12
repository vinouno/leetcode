// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> umap;
        for(auto a : magazine)
        {
            umap[a]++;
        }
        for(auto b : ransomNote)
        {
            if(umap[b] == 0)
            return false;
            umap[b]--;
        }
        return true;
    }
};
// @lc code=end

