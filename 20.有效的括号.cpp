/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

#include <iostream>
#include <vector>
#include <stack>

using namespace std;


// @lc code=start
class Solution {
public:
bool isValid(string s) {
    stack<char> t;
    char top;
      int n = s.size();
    if (n % 2 == 1) {
        return false;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='('||s[i]=='['||s[i]=='{')
        {
            t.push(s[i]);
        }
        else{
            if(t.empty())
                return false;
            top=t.top();
            if (s[i]==')'&&top=='(')
                t.pop();
            else if(s[i]==']'&&top=='[')            
                t.pop();
            else if(s[i]=='}'&&top=='{')
                t.pop();
            else
                return false;
    }
    }
    return t.empty();
    
} 


};
// @lc code=end

