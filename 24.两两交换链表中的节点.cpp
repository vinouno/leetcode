// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = new ListNode();
        temp->next = head;
        ListNode* m = head;
        int i = 0;
        while(m != nullptr && m->next != nullptr)
        {
            ListNode* n = m->next;
            m->next = n->next;
            n->next = m;
            temp->next = n;
            temp = m;
            m = m->next;
            if(i == 0)
            {
                head = n;
            }
            i++; 
        }

        return head;
    }
};
// @lc code=end

