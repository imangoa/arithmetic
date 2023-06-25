/*
 * @lc app=leetcode.cn id=43 lang=cpp
 *
 * [43] 字符串相乘
 */
#include <iostream>
#include <vector>
using namespace std;


// 关键思想  x+y-1<=len(x*y)<=x+y  当x，y！=0
// @lc code=start
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0"||num2=="0")
            return "0";
        int m=num1.size(),n=num2.size();
        vector<int> ans(m+n,0);
        for(int i=m-1;i>=0;i--){
            int x = num1[i]-'0';
            for(int j=n-1;j>=0;j--){
                int y=num2[j]-'0';
                ans[i+j+1]+=x*y;
            }
        }
        for(int i=m+n-1;i>0;i--){
            ans[i-1]+=ans[i]/10;
            ans[i]%=10;
        }
       int index = ans[0]==0?1:0;
        string s="";
       while(index<m+n)
           s.push_back(ans[index++]+'0');
        return s;
    }
    
};