#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: vector<int> tmp;
    vector<int> sortArray(vector<int> nums)
    {
        tmp.resize(nums.size(),0);
        guibin(nums,0,nums.size()-1);
        return nums;
    }
    void guibin(vector<int> &nums,int l,int r){
        if(l>=r)
            return;
        int mid = (l+r)/2;
        guibin(nums,l,mid);
        guibin(nums,mid+1,r);
        int i=l,j=mid+1;
        int cur = 0;
        while (i<=mid&&j<=r)
        {
            if (nums[i]<nums[j])
                tmp[cur++]=nums[i++];
            else
                tmp[cur++]=nums[j++];
        }
        while (i<=mid)
        {
            tmp[cur++]=nums[i++];
        }
        while (j<=r)
        {
            tmp[cur++]=nums[j++];
        }
        for (int  i = 0; i < r-l+1; i++)
        {
            nums[i+l]=tmp[i];
        }
        
        
        
        
    }
};