// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根 
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        long long int l = 0, r = x, ans = 0;
        while(l <= r)
        {
            long long int mid = (l + r)/2;
            if(mid * mid > x)
            r = mid;
            else if((mid + 1) * (mid + 1) <= x)
            l = mid + 1;
            else
            return mid;
        }
        return ans;
    }
};
// @lc code=end

