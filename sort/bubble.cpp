#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void bubbleSort(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size()-1; j++)
            {
                int a=0;
                if (nums[j]>nums[j+1])
                {
                    swap(nums[j],nums[j+1]);
                    a=1;
                }
                if (a==0)
                {
                    return ;
                }
                
                
            }
            
        }
        
                
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1,2,3,5,6,7,9};
    s.bubbleSort(nums);
    return 0;
}