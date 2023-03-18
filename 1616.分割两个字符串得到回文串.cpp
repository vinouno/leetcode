# include <string>

using namespace std;
/*
 * @lc app=leetcode.cn id=1616 lang=cpp
 *
 * [1616] 分割两个字符串得到回文串
 */

// @lc code=start
class Solution {
public:
    bool checkSelfPalindrome(const string &a, int left, int right) {
        while (left < right && a[left] == a[right]) {
            left++;
            right--;
        }
        return left >= right;
    }

    bool checkConcatenation(const string &a, const string &b) {
        int n = a.size();
        int left = 0, right = n - 1;
        while (left < right && a[left] == b[right]) {
            left++;
            right--;
        }
        if (left >= right) {
            return true;
        }
        return checkSelfPalindrome(a, left, right) || checkSelfPalindrome(b, left, right);
    }

    bool checkPalindromeFormation(string a, string b) {
        return checkConcatenation(a, b) || checkConcatenation(b, a);
    }
};
// @lc code=end

