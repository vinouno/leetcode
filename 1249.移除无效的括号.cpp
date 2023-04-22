#include <string>
#include <stack>

using namespace std;
/*
 * @lc app=leetcode.cn id=1249 lang=cpp
 *
 * [1249] 移除无效的括号
 */

// @lc code=start
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] =='(')
            {
                st.push(i);
            }
            else if(s[i] ==')')
            {
                if(!st.empty()) {
                    st.pop();
                } else {
                    s.erase(i, 1);
                    i--;
                }
            }
        }
        while(!st.empty())
        {
            s.erase(st.top(),1);
            st.pop();
        }
        return s;
    }
};
// @lc code=end

