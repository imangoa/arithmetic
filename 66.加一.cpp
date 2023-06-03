/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        int i =digits.size()-1;
        while (carry!=0&&i>-1)
        {
            digits[i]+=carry;
            carry=0;
            if (digits[i]>9)
            {
                    digits[i]=0;
                    carry=1;
            }
            i--;
            
        }
        if (carry)
            digits.insert(digits.begin(), 1);
        
        
        return digits;
    }
};

// int main()
// {
//     Solution s;
//     vector<int> v = {9,9,9};
//     v =s.plusOne(v);
//     return 0;
// }
// @lc code=end

