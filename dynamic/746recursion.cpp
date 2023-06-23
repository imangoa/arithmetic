#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;


class Solution {
public:
    vector<int> record;
    int minCostClimbingStairs(vector<int>& cost) {
        record.resize(cost.size()+1,0);
        return recur(cost.size(),cost);
        
    }
    int recur(int n,vector<int>& cost){
        if (n==0||n==1)
        {
            return 0;
        }
        if (record[n]!=0)
        {
            return record[n];
        }
        
        int val= min(recur(n-1,cost)+cost[n-1],recur(n-2,cost)+cost[n-2]);
        record[n]=val;
        return val;
        
    }
};