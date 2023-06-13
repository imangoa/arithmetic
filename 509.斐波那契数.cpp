/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    unordered_map<int,int> records;
    int fib(int n) {
        if (n==0)
            return 0;
        if (n==1)
            return 1;
        if (records.find(n)!=records.end())
            return records[n];
        
        int cur = fib(n-1)+fib(n-2);
        records[n]=cur;
        return cur;
        
    }
};
// @lc code=end

