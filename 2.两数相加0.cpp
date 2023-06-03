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
        stack<int> s1,s2;
        while (l1->next!=nullptr)
        {
            s1.push(l1->val);
            l1=l1->next;
        }
        while (l2->next!=nullptr)
        {
            s2.push(l2->val);
            l2=l2->next;
        }
        if(s1.size()>s2.size()){
            int dif = s1.size()-s2.size();
            for (int i = 0; i < dif; i++)
                s2.push(0);
        }
        else{
            int dif = s2.size()-s1.size();
            for (int i = 0; i < dif; i++)
                s1.push(0);
        }
        for(int i=0;i<s1.size();i++)
        {
            s1.pop()+s2.pop()
        }
        
        
    }
};
// @lc code=end

