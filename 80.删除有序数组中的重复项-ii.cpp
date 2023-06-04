/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除有序数组中的重复项 II
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        int count=0;
        for (int i = 1; i <= nums.size(); i++)
        {
            if (i<nums.size()&&nums[i-1]==nums[i])
            {
                count++;
                if (count>=2)
                {
                    continue;
                }     
                
            }
            else{
                count=0;
            }
            nums[j]=nums[i-1];
            j++;
        }
        return j;
        
    }
};
// @lc code=end

