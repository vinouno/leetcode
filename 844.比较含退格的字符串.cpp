// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=844 lang=cpp
 *
 * [844] 比较含退格的字符串
 */

// @lc code=start
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i =s.size() - 1, j = t.size() - 1;
        int sskip = 0, tskip = 0;
        while(i >= 0 || j >= 0)
        {
            while(i >= 0)
            {
                if(s[i] == '#')
                {
                    sskip++;
                    i--;
                }
                else if(sskip > 0)
                {
                    sskip--;                    
                    i--;
                }
                else
                break;

            }
            while(j >= 0)
            {
                if(t[j] == '#')
                {
                    tskip++;
                    j--;
                }
                else if(tskip > 0)
                {
                    tskip--;                    
                    j--;
                }
                else
                break;

            }
            if (i >= 0 && j >= 0) {
                if (s[i] != t[j]) {
                    return false;
                }
            } else {
                if (i >= 0 || j >= 0) {
                    return false;
                }
            }
            i--, j--;
        }
        return  true;

    }

};
// @lc code=end

