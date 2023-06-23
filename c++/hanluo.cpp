#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void hanota(vector<int>& A, vector<int>& B, vector<int>& C) {      
        move(A,B,C,A.size())  ;
    }
    void move(vector<int>&A,vector<int>&B,vector<int>&C,int size){
        if (size==1)
        {
            int a = A.back();
            A.pop_back();
            C.push_back(a);
            cout<<a<<">>";
        }
        move(A,C,B,size-1);
        move(A,B,C,1);
        move(B,A,C,size-1);

    }
};

int main()
{
    Solution s;
    return 0;
}