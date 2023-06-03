/*
 * @lc app=leetcode.cn id=1672 lang=cpp
 *
 * [1672] 最富有客户的资产总量
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            int count=accounts[i].size();
            int sum=0;
            for (int j = 0; j < count; j++)
            {
                sum+=accounts[i][j];
                max=max>sum?max:sum;
            }
            
            
        }
        return max;
        
    }
};
// @lc code=end

