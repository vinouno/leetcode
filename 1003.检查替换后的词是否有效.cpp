// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <stack>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=1003 lang=cpp
 *
 * [1003] 检查替换后的词是否有效
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch : s)
        {
            if(ch == 'c')
            {
                if(!st.empty() && st.top() == 'b')
                {
                    st.pop();
                    if(!st.empty() && st.top() == 'a')
                    {
                        st.pop();
                        continue;
                    }
                    else
                    return false;
                }
            }
            st.push(ch);
        }
        if(st.empty())
        return true;
        else
        return false;
    }
};
// @lc code=end

