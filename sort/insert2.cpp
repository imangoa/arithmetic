#include <iostream>
#include <vector>
using namespace std;


class Solution{
    public:void insertSort(vector<int> &nums){
        for (int i = 1; i < nums.size(); i++)
        {
            int tmp = nums[i];
            int j=i-1;;
            while (j>=0&&nums[j]>tmp)
            {
                nums[j+1]=nums[j];
                j--;
            }
            nums[j+1]=tmp;
            
            
        }
              

    }
};

int main()
{
    Solution s;
    vector<int> v={222,44,33,25,6,72,8};
    s.insertSort(v);
    return 0;
}