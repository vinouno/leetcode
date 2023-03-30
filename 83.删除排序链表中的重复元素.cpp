// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* change = head;
        ListNode* temp;

        if(head == NULL)
        return head;
        while(change->next)
        {
            if(change->next->val != change->val)
            change = change->next;
            else
            {
                temp = change->next;
                change->next = change->next->next;
                temp->next = NULL;
                delete(temp);
            }
        }
        return head;
    }
};
// @lc code=end

