// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <stack>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=1019 lang=cpp
 *
 * [1019] 链表中的下一个更大节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        stack<pair<int, int>> node;
        vector<int> result;
        int index = -1;
        while(head != nullptr)
        {
            index++;
            result.push_back(0);
            while(!node.empty() && node.top().first < head->val)
            {
                result[node.top().second] = head->val;
                node.pop();
            }
            node.emplace(head->val,index);
            head = head->next;
        }
        return result;
    }
};
// @lc code=end

