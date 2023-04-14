// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=82 lang=cpp
 *
 * [82] 删除排序链表中的重复元素 II
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
        if(head == nullptr) return head;
        ListNode* temp = new ListNode(101);
        temp->next = head;
        ListNode* slowIndex = temp;
        ListNode* fastIndex = head;
        while(fastIndex != nullptr && fastIndex->next)
        {
            int value = fastIndex->val;
            fastIndex = fastIndex->next;
            if(value == fastIndex->val)
            {
                while(fastIndex != nullptr && fastIndex->val == value)
                {
                    slowIndex->next = fastIndex->next;
                    ListNode* d = fastIndex;
                    fastIndex = fastIndex->next;
                    delete d;
                }
            }
            else
            {
                slowIndex = slowIndex->next;
            }
        }

        return temp->next;
    }
};
// @lc code=end

