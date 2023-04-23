// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <unordered_map>
#include <queue>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=113 lang=cpp
 *
 * [113] 路径总和 II
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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        unordered_map<TreeNode*,int> m;
        unordered_map<TreeNode*,vector<int>> p;
        vector<vector<int>> result;
        queue<TreeNode*> que;
        if(root != nullptr)
        {
            que.push(root);
            m[root] = root->val;
            p[root].push_back(root->val);
            if(root->val == targetSum && root->left == nullptr && root->right == nullptr)
            result.push_back(p[root]);
        }
        while(!que.empty())
        {
            int size = que.size();
            for(int i = 0; i < size; i++)
            {
                TreeNode* node = que.front();
                que.pop();
                if(node->left)
                {
                    m[node->left] = m[node] + node->left->val;
                    que.push(node->left);
                    p[node->left].insert(p[node->left].end(),p[node].begin(),p[node].end());
                    p[node->left].push_back(node->left->val);
                    if(m[node->left] == targetSum && node->left->left == nullptr && node->left->right == nullptr)
                    result.push_back(p[node->left]);
                }
                if(node->right)
                {
                    m[node->right] = m[node] + node->right->val;
                    que.push(node->right);
                    p[node->right].insert(p[node->right].end(),p[node].begin(),p[node].end());
                    p[node->right].push_back(node->right->val);
                    if(m[node->right] == targetSum && node->right->left == nullptr && node->right->right == nullptr)
                    result.push_back(p[node->right]);
                }
            }
        }
        return result;
    }
};
// @lc code=end

