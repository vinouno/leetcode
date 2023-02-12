// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=454 lang=cpp
 *
 * [454] 四数相加 II
 */

// @lc code=start
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> umap;
        int count = 0;
        for(int a : nums1)
        {
            for(int b : nums2)
            {
                umap[a + b]++;
            }
        }

        for(int c : nums3)
        {
            for(int d : nums4)
            {
                if(umap.find(- c - d) != umap.end() )
                {
                    count += umap[- c - d];
                }
            }
        }
        return count;
    }
};
// @lc code=end

