/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 找出字符串中第一个匹配项的下标
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0,j=0;
        while (i<haystack.size()-needle.size())
        {
            while (j<needle.size())
            {
                j=0;
                if (haystack[i+j]=needle[j])
                {
                    j++;
                }
                else{
                    break;
                }
                if (j==needle.size()-1)
                {
                    return i;
                }
                
                
            }
            i++;
            
        }
        
        return -1;
    }
};
// @lc code=end

