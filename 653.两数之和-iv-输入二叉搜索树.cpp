/*
 * @lc app=leetcode.cn id=653 lang=cpp
 *
 * [653] 两数之和 IV - 输入二叉搜索树
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
    bool findTarget(TreeNode* root, int k) {
        vector<int> res;
        inorder(root,res);
        int left = 0;
        int right = res.size()-1;
        while(left<right)
        {
            int sum = res[left] + res[right];
            if(sum == k) return true;
            else if(sum < k) //和比目标值小，则移动左指针 
            {
                left++;
            }
            else 
            {
                right--; //和比目标值大，则移动右指针 
            }
        }
        return false;
        
    }
    void inorder(TreeNode *root,vector<int> &res)
    {
        if(root)
        {
            inorder(root->left,res);
            res.push_back(root->val);
            inorder(root->right,res);
        }
    }
};
// @lc code=end

