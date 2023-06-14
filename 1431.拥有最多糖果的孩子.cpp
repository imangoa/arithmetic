/*
 * @lc app=leetcode.cn id=1431 lang=cpp
 *
 * [1431] 拥有最多糖果的孩子
 */

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int maxPosition = *max_element(candies.begin(),candies.end()) ; //获取最大值
        for(auto i:candies){
            if (i+extraCandies>=maxPosition)
                res.push_back(true);
            else
                res.push_back(false);
            
        }
        return res;

    }
};

// int main()
// {
//     Solution s;
//     vector<int> input = {2,3,5,1,3};
//     s.kidsWithCandies(input,3);
//     return 0;
// }
// @lc code=end

