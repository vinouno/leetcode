// @before-stub-for-debug-begin
#include <vector>
#include <string>

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummyHead = new ListNode(0,head);  //创建虚拟头结点，后面操作可以统一
        ListNode* cur = dummyHead; //创建用来遍历的节点，cur=current
        while (cur->next != NULL)
        {
            if(cur->next->val == val)
            {
                ListNode* temp = cur->next;
                cur->next = cur->next->next; //删除操作，反而是最简单的一步
                delete temp; //C++一定要释放空间
            }
            else
            {
                cur = cur->next; //不是要删除的节点，就跳过
            }
        }
        head = dummyHead->next;
        delete dummyHead;//释放空间
        return head;
    }
};
// @lc code=end

