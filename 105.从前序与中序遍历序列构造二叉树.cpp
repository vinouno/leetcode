// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=105 lang=cpp
 *
 * [105] 从前序与中序遍历序列构造二叉树
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* node = new TreeNode(preorder[0]);
        if(preorder.size() == 1)
        return node;
        int left = find(inorder.begin(),inorder.end(),preorder[0]) - inorder.begin();
        if(left != 0)
        {
            vector<int> pre(preorder.begin() + 1, preorder.begin() + 1 + left);
            vector<int> ino(inorder.begin(),inorder.begin() + left);
            node->left = buildTree(pre, ino);
        }
        if(left + 1 != preorder.size())
        {
            vector<int> pre(preorder.begin() + 1 + left, preorder.end());
            vector<int> ino(inorder.begin() + left + 1, inorder.end());
            node->right = buildTree(pre, ino);
        }
        return node;
    }
};
// @lc code=end

