/*
 * @lc app=leetcode.cn id=345 lang=cpp
 *
 * [345] 反转字符串中的元音字母
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    string reverseVowels(string s) {
        int i =0,j=s.size()-1;
        string tool = "aeiouAEIOU";
        while (i<j)
        {
            while (tool.find(s[i])==-1&&i<j){
                i++;
            }
            while (tool.find(s[j])==-1&&i<j){
                j--;
            }

            swap(s[i++],s[j--]);
        }
        return s;
    }
};

// @lc code=end

