// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <stack>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=150 lang=cpp
 *
 * [150] 逆波兰表达式求值
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        for(string str : tokens)
        {
            if(str == "+" || str == "-" || str == "*"|| str == "/")
            {
                long long num1 = st.top();
                st.pop();
                long long num2 = st.top();
                st.pop();
                if(str == "+") 
                st.push(num2 + num1);
                if(str == "-") 
                st.push(num2 - num1);
                if(str == "*") 
                st.push(num2 * num1);
                if(str == "/") 
                st.push(num2 / num1);
                
            }
            else
            {
                st.push(stoll(str));
            }
        }
        return st.top();
    }
};
// @lc code=end

