// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=1053 lang=cpp
 *
 * [1053] 交换一次的先前排列
 */

// @lc code=start
class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int n = arr.size() - 1;
        while(arr[n] >= arr[n-1])
        {
            n--;
            if(n == 0)
            return arr;
        }
        int temp = n - 1;
        n = arr.size() - 1;
        while(arr[temp] <= arr[n])
        {
            n--;
        }
        while(arr[n - 1] == arr[n])
        {
            n--;
        }
        swap(arr[n], arr[temp]);
        return arr;
    }
};
// @lc code=end

