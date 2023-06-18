#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> tmp;
    vector<int> sortArray(vector<int>& nums) {
        tmp.resize(nums.size(),0);
        guibinSort(nums,0,nums.size()-1);
    }

    void guibinSort(vector<int>& num,int l,int r){
        if (l<=r)
            return;
        int mid = (l+r)/2;
        guibinSort(num,l,mid);
        guibinSort(num,mid+1,r);
        int i=l,j=mid+1;
        int cur=0;
        while (i<=mid&&j<=r)
        {
            if (num[i]>num[j])
            {
                tmp[cur++]=num[i++];
            }
            else{
                tmp[cur++]=num[j++];
            }
            
        }
        while (i<=mid)
        {
            tmp[cur++]=num[i++];
        }
        while (j<=r)
        {
            tmp[cur++]=num[j++];
        }
        for (int i = 0; i < r-l+1; i++)
        {
            num[i+l]=tmp[i];
        }
        
        
        
        
                    
        
        
    }
};