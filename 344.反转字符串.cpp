/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        // 双指针
/*         int right=s.size()-1;
        int left =0;
        while (left<right)
        {
            swap(s[left],s[right]);
            left++;
            right--;
         */

// 栈
/*         stack<char> st;
        for(auto i:s)
            st.push(i);
        for (int i = 0; i < s.size(); i++)
        {
            s[i]=st.top();
            st.pop();
        } */

        vector<char> res;
        reverse(res,s,0);
        s=res;



        
    }

    void reverse(vector<char> &res,vector<char> &s,int k){
        if (k==s.size())
            return;
        reverse(res,s,k+1);
        res.push_back(s[k]);

    }
};
// @lc code=end

