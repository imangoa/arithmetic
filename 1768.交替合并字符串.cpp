/*
 * @lc app=leetcode.cn id=1768 lang=cpp
 *
 * [1768] 交替合并字符串
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int i=0,j=0, k=0;
        while (i<word1.size()||j<word2.size())
        {
            if(i<word1.size())
                res.push_back(word1[i++]);
            if(j<word2.size())
                res.push_back(word2[j++]);
        }
     return res;   
    }
};
// @lc code=end

