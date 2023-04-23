// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
// @before-stub-for-debug-end

#include <deque>
#include <vector>

using namespace std;
/*
 * @lc app=leetcode.cn id=103 lang=cpp
 *
 * [103] 二叉树的锯齿形层序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        deque<TreeNode*> st;
        vector<vector<int>> result;
        if(root != nullptr)
        st.push_back(root);
        int depth = 0;
        while(!st.empty())
        {
            int size = st.size();
            vector<int> temp;
            for(int i = 0; i < size; i++)
            {
                TreeNode* node = st.back();
                st.pop_back();
                temp.push_back(node->val);
                if(node->left)
                {
                    st.push_front(node->left);
                }
                if(node->right)
                {
                    st.push_front(node->right);
                }

            }
            if(depth%2 == 1)
            reverse(temp.begin(),temp.end());
            result.push_back(temp);
            depth++;
        }
        return result;
    }
};
// @lc code=end

