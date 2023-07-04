/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */
#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;


//  滑动窗口
// [left,right) 当窗口满足条件时，right++。当窗口不满足条件时，left++直到满足条件。
// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,max_len = 0;
        unordered_set<char> lookup;
        for (int i = 0; i < s.size(); i++)
        {
            while (lookup.find(s[i])!=lookup.end())
            {
                lookup.erase(s[left]);
                left++;
            }
            lookup.insert(s[i]);
         max_len=max(max_len,i-left+1)   ;
        }
        return max_len;                
    }
};

// @lc code=end

