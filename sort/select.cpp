#include <iostream>
#include <vector>
using namespace std;



class Solution {
public:
    void selectSort(vector<int> &nums){
        for(int k=0;k<nums.size();k++){
        for (int i = k; i < nums.size(); i++)
        {
            int min =k;
            if (nums[i]<nums[min])
            {
                    min=i;
            }
            swap(nums[min],nums[k]);
        }
        
    }
    }
};

int main()
{
    Solution s;
    vector<int> v={2,3,1,4,5,6};
    s.selectSort(v);
    return 0;
}