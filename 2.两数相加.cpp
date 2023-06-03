/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
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

#include <iostream>
#include <vector>
#include <stack>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int l1_val,l2_val;
        ListNode * root = new ListNode(0);
        ListNode *cursor = root;
        while (l1!=nullptr||l2!=nullptr||carry!=0)
        {
            l1_val = l1?l1->val:0;
            l2_val = l2?l2->val:0;
            int sum = l1_val+l2_val+carry;
            ListNode * cur = new ListNode(sum%10);
            cursor->next=cur;
            cursor=cur;
            if(l1!=nullptr) l1=l1->next;
            if(l2!=nullptr)l2=l2->next;
            carry=sum/10;
            
        }
        return root->next;
        

    }
};

// @lc code=end

