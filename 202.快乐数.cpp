// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution {
public:
    int getSum(int num)
    {
        int sum = 0;
        while(num > 0)
        {
            sum += ((num % 10) * (num % 10));
            num /= 10;   
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> nums;
        while (nums.find(n) == nums.end())
        {
            nums.insert(n);
            n = getSum(n);
            if(n == 1)
            return true;
        }
        return false;
    }
};
// @lc code=end

