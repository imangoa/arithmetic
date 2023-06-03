#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public :int partition(vector<int> A,int low,int high){
        int pivot = A[low];
        while (low<high)
        {
            while (low<high&&A[high]>=pivot)
            {
                high--;
            }
            A[low]=A[high];
            while (low<high&&A[low]<=pivot)
            {
                low++;
            }
            A[high]=A[low];   
        }
        A[low]=pivot;
        return low;
        
    }
    public: void quickSort(vector<int> A,int low,int high){
        if(low<high){
            int pivotPos = partition(A,low,high);
            quickSort(A,low,pivotPos-1);
            quickSort(A,pivotPos+1,high);
        }

    }

};