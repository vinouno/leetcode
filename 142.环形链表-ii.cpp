// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        /*
        ListNode* fast = head;
        ListNode* slow = head;
        while (true) {
            if (fast == NULL || fast->next == NULL) return NULL;
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow) break;
        }
        fast = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return fast;
        */
        unordered_set<ListNode *> visited;
        while(head != nullptr)
        {
            if(visited.count(head)) //返回head出现的次数
            {
                return head;
            }
            visited.insert(head);
            head = head->next;
        }
        return nullptr;
    }
};
// @lc code=end

