/*
 * @lc app=leetcode.cn id=1480 lang=cpp
 *
 * [1480] 一维数组的动态和
 */

#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i]=nums[i-1]+nums[i];
        }
        return nums;

    }
};


// int main()
// {
//     Solution s;
//     return 0;
// }


// @lc code=end

