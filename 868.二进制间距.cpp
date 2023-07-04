/*
 * @lc app=leetcode.cn id=868 lang=cpp
 *
 * [868] 二进制间距
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    int binaryGap(int n) {
        int last=-1,ans=0;
        for (int i = 0; n; i++)
        {
            if(n&1){
                if (last!=-1)
                {
                    ans = max(ans,i-last);
                }
                last = i;
                
            }
            n>>=1;
        }
        
    }
};
// @lc code=end

