#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int numSize =nums.size();
        vector<int> res(numSize) ;
        for (int i = 0; i < numSize; i++)
        {
            int index = (i+3)%numSize;
            res[index]=nums[i];
        }
        for (int i = 0; i < numSize; i++)
        {

            nums[i]=res[i];
        }
                
    }
};

int main()
{
    Solution s;
    vector<int> nums={1,2,3,4,5,6};
    s.rotate(nums,3);
    return 0;
}