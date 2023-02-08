// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* slowIndex = dummyHead;
        ListNode* fastIndex = dummyHead;
        for(int i = 0; i < n; i++)
        {
            fastIndex = fastIndex->next;
        }

        while(fastIndex->next != NULL)
        {
            fastIndex = fastIndex->next;
            slowIndex = slowIndex->next;
        }

        ListNode* temp = slowIndex->next;
        slowIndex->next = temp->next;
        delete temp; 

        return dummyHead->next;
    }
};
// @lc code=end

