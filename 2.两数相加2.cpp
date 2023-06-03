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
        int add =0;
        ListNode *root = new ListNode(0);
        ListNode *cursor = root;
        while (l1!=nullptr || l2!=nullptr|| add!=0)
        {
            int l1_val = l1?l1->val:0;
            int l2_val = l2?l2->val:0;
            int curs = (l1_val+l2_val+add)%10;
            int add = curs/10;
            ListNode *cur = new ListNode(curs);
            cursor->next=cur;
            cursor = cur;

            if(l1 != nullptr) l1 = l1->next;
            if(l2 != nullptr) l2 = l2->next;
        }
        return root->next;
        
        
    }
};


int main()
{
    Solution s;
    return 0;
}
// @lc code=end

