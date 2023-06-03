/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 轮转数组
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int numSize =nums.size();
        vector<int> res(numSize) ;
        for (int i = 0; i < numSize; i++)
        {
            int index = (i+k)%numSize;
            res[index]=nums[i];
        }
        for (int i = 0; i < numSize; i++)
        {

            nums[i]=res[i];
        }
                
    }
};

// @lc code=end

