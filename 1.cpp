#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution {
public:
int singleNumber(vector<int>& nums) {
    unordered_map<int,int> hash;
    for(auto num:nums)
        hash[num]++;
    for(auto it:hash){
        if(it.second==2)
            return it.first;
    }
}

};
// @lc code=end



int main()
{
    Solution s;
    vector<int> s2 ={1,2,3,4,5,1};
    int a = s.singleNumber(s2);
    return 0;
}