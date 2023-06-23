/*
 * @lc app=leetcode.cn id=343 lang=cpp
 *
 * [343] 整数拆分
 */
#include <iostream>
#include <vector>
using namespace std;


//动态规划，dp数组。前面的计算对于后面的计算有用

// @lc code=start
class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(n+1);
        dp[2]=1;
        for (int i = 3; i <= n; i++)
        {
            for (int j = 1; j <=i; j++)
            {
                dp[i]=max(dp[i],max(j*dp[i-j],j*(i-j)));
            }
            
        }
        
    }
};
// @lc code=end

