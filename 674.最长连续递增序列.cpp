/*
 * @lc app=leetcode.cn id=674 lang=cpp
 *
 * [674] 最长连续递增序列
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count = 1;
        int max  =1;
        for (int i = 0; i < nums.size()-1; i++)
        {
            if (nums[i]<nums[i+1]){
                count++;
                max=max>count?max:count;
            }
            else{
                count=1;
            }
        }
        return max;
    }
};
// @lc code=end
