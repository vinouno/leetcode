// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=25 lang=cpp
 *
 * [25] K 个一组翻转链表
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k == 1) return head;
        ListNode* temp = new ListNode();
        temp->next = head;
        int t = 0;
        vector<ListNode*> n(k+1, temp);
        while(n[0] != nullptr)
        {
            for(int i = 0; i < k; i++)
            {
                if(n[i]->next != nullptr)
                {
                    n[i+1] = n[i]->next;
                }
                else return head;
            }
            if(t == 0)
            {
                head = n[k];
            }
            for(int i = 1; i < (k/2) + 1; i++)
            {
                if(i == 1)
                {
                    n[i-1]->next = n[k-i+1];
                    n[i]->next = n[k-i+1]->next;
                }
                else
                {
                    n[k-i+2]->next = n[k-i+1];
                    n[i]->next = n[i-1];
                }
                if(k%2 == 0 && i == k/2)
                {
                    n[i+1]->next=n[i]; 
                }
                else
                {
                    n[k-i+1]->next = n[i+1];
                    n[k-i]->next = n[i];
                }
            }

            n[0] = n[1];
            t++;
        }

        return head;
    }
};
// @lc code=end

