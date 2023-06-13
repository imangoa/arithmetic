/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
 */

// @lc code=start
/* *
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode():val(0),next(nullptr){}
//     ListNode(int x):val(x),next(nullptr){}
//     ListNode(int x,ListNode *next):val(x),next(next){}
// };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // ListNode* pre = nullptr;
        // ListNode* cur = head;
        // ListNode* tmp = head;
        // while (tmp!=nullptr)
        // {
        //     cur =tmp;
        //     tmp =cur->next;
        //     cur->next=pre;
        //     pre=cur;

        // }
        // return cur;
        if (head==nullptr||head->next==nullptr)
            return head;
        ListNode* n =reverseList(head->next);
        head->next->next=head;
        head->next =nullptr;
        return n;
    }
};
// @lc code=end

