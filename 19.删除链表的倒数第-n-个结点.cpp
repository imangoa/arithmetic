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
struct ListNode{
    int val;
    ListNode *next;
    ListNode():val(0),next(nullptr){}
    ListNode(int x):val(x),next(nullptr){}
    ListNode(int x,ListNode *next):val(x),next(next){}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *tail=head,*cur =head;
        while (n>0)
        {
            tail=tail->next;
            n--;
        }

        while (tail!=nullptr&&tail->next!=nullptr)
        {
            cur=cur->next;
            tail=tail->next;
        }
        if(tail==nullptr)
            return head->next;
        cur->next=cur->next->next;
        return head;
    }
};
// @lc code=end

