/*
 * @lc app=leetcode.cn id=709 lang=cpp
 *
 * [709] 转换成小写字母
 */
#include <iostream>
#include <vector>
using namespace std;


// @lc code=start
class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.size(); i++)
           if (s[i]>='A'&&s[i]<='Z')
            s[i] = tolower(s[i]);
        return s;
    }
};
// @lc code=end

