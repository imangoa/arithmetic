#include <iostream>
#include <vector>
#include<stack>
using namespace std;

/*
 * @lc app=leetcode.cn id=415 lang=cpp
 *
 * [415] 字符串相加
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1;
        int j = num2.size()-1;
        string s = "";
        int add = 0;
        while (i>=0||j>=0||add!=0)
        {
            int one = i>=0?num1[i]-'0':0;
            int two = j>=0?num2[j]-'0':0;
            int cur = (one+two+add)%10;
            add = (one+two+add)/10;
            s.push_back('0'+cur);
        }
        reverse(s.begin(),s.end());
        return s;
        
    }
};
// @lc code=end

