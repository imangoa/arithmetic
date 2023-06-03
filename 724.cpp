/*
 * @lc app=leetcode.cn id=724 lang=cpp
 *
 * [724] 寻找数组的中心下标
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        int val = 0;
        for (int i = 0; i < nums.size(); i++)
            total+=nums[i];
        for (int j = 0; j < nums.size(); j++){
            int judge=total-nums[j];
            if (val==judge/2&&judge%2==0)
            {
                return j-1;
            }
            val+=nums[j];


        }
        return -1; 
        
        
        
        
    }
};

int main()
{
    Solution s;
    vector<int> v = {1,7,3,6,5,6};
    s.pivotIndex(v);
    return 0;
}
// @lc code=end

