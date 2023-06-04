/*
 * @lc app=leetcode.cn id=374 lang=cpp
 *
 * [374] 猜数字大小
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

// int guess(int val){}
class Solution {
public:
    int guessNumber(int n) {
        int left=1,right=n,val;
        while (left<=right)
        {
            val = left+(right-left)/2;
            if (guess(val)==-1)
            {
                right=val-1;
            }
            else if (guess(val)==1)
            {
                left = val+1;
            }
            else{
                break;
            }
            
            
        }
        return val;
    }
};
// @lc code=end

