#include <iostream>
#include <vector>
using namespace std;


class Solution{
    public: int partition(vector<int> v,int left,int right){
        int pivot = v[left];
        while (left<right)
        {
            while (left<right&&pivot<=v[right])
            {
                right--;
            }
            v[left]=v[right];
            while (left<right&&pivot>=v[left])
            {
                left--;
            }
            v[right]=v[left];
            
            
        }
        v[left]= pivot;
        return left;
    }
};