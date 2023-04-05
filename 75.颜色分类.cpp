// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=75 lang=cpp
 *
 * [75] 颜色分类
 */

// @lc code=start
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int m = 0;
        int n = nums.size() - 1;
        for (int i = 0; i <= n; i++)
        {
                while (i <= n && nums[i] == 2) {
                swap(nums[i], nums[n]);
                --n;
            }
            if (nums[i] == 0) {
                swap(nums[i], nums[m]);
                ++m;
            }
        }
    }
};
// @lc code=end
