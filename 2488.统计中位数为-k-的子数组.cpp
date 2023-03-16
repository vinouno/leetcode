#include <vector>
#include <unordered_map>

using namespace std;
/*
 * @lc app=leetcode.cn id=2488 lang=cpp
 *
 * [2488] 统计中位数为 K 的子数组
 */

// @lc code=start
class Solution {
public:
    int countSubarrays(vector<int>& nums, int k) {
        vector<int> sign = vector(nums.size() + 1, 0);
        unordered_map<int,int> sum;
        bool isK = false;
        int result = 0;

        sum[0]++;
        for(int i = 1; i <= nums.size(); i++)
        {
            
            if(nums[i - 1] > k)
            sign[i] = sign[i - 1] + 1;
            else if(nums[i - 1] < k)
            sign[i] = sign[i - 1] + -1;
            else
            {
                sign[i] = sign[i - 1];
                isK = true;
            }
            if(isK)
            {
                result += sum[sign[i]];
                result += sum[sign[i] - 1];
            }
            else
            sum[sign[i]]++;

            //cout << sign[i] << endl;
        }
        return result;
    }
};
// @lc code=end

