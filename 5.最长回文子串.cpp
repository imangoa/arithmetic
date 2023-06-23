/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int max_len = 0,begin;
        if(n<2)
            return s;
        
        vector<vector<int>> dp(n,vector<int>(n));

        // 将长度为1的dp数组赋值为true
        for (int i = 0; i < n; i++)
        {
            dp[i][i]=true;
        }

        for (int len = 2; len <=n; len++)
        {
            for (int i = 0; i < n; i++)
            {
                int j=i+len-1;
                if (s[i]==s[j])
                    dp[i][j]=dp[i+1][j-1];           
                else
                    dp[i][j]=false;
                if(dp[i][j]&&len>max_len){
                    max_len = len;
                    begin = i;
                }
            }

            
        }
                
    }
};
// @lc code=end

