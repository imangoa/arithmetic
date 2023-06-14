#include <iostream>
#include <vector>
using namespace std;

/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int pre =0,j=0;
        for(int i=0;i<flowerbed.size();i++){
            int plant =0;
            if (flowerbed[i]==0)
            {
                int late =i+1<flowerbed.size()?flowerbed[i+1]:0;
                if (pre==0&&late==0){
                    n--;
                    plant=1;
                }
            }
            pre = plant==0?flowerbed[i]:1;
        }
        if(n>0)
            return false;
        return true;
    }

};
// @lc code=end

