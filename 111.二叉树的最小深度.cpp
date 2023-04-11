// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <queue>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    int minDepth(TreeNode* root) {
        queue<TreeNode*> que;
        if(root != NULL)
        que.push(root);
        int depth = 0;
        while(!que.empty())
        {
            depth++;
            int size = que.size();
            for(int i = 0; i < size; i++)
            {
                TreeNode* node = que.front();
                que.pop();
                if(node->left)
                {
                    que.push(node->left);
                }
                if(node->right)
                {
                    que.push(node->right);
                }
                if(node->right == nullptr && node->left == nullptr)
                {
                    return depth;
                }
            }
        }
        return 0;
    }
};
// @lc code=end

