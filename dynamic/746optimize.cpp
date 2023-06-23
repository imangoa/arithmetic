#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> record;
    int prev1=0,prev2=0,cur;
    int minCostClimbingStairs(vector<int>& cost) {
        for (int i = 2; i <=cost.size(); i++)
        {
            cur=min(prev1+cost[i-1],prev2+cost[i-2]);
            prev2=prev1;
            prev1=cur;
        }
        return cur;
    }
};
int main()
{
    Solution s;
    vector<int> v{10,15,20};
    s.minCostClimbingStairs(v);
    return 0;
}