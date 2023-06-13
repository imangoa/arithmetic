/*
 * @lc app=leetcode.cn id=990 lang=cpp
 *
 * [990] 等式方程的可满足性
 */
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Unitefind{
    private:
        vector<int> parents;
    public:
    Unitefind() {
        parents.resize(26);
        iota(parents.begin(), parents.end(), 0);
    }
        int find(int x){
            while (parents[x]!=x)
            {
                x=parents[x];
            }
            return x;
            
        }
        void unite(int index1,int index2){
            int px = find(index1);
            int py = find(index2);
            if (px==py)
            {
                return;
            }
            parents[px]=py;
            
        }
};



// @lc code=start
class Solution {
public:
    bool equationsPossible(vector<string>& equations) {
        Unitefind uf;
        for(auto s:equations){
            if(s[1]=='='){
                int index1 = s[0]-'a';
                int index2 = s[3]-'a';
                uf.unite(index1,index2);
            }
        }
        for(auto s:equations){
            if (s[1]=='!')
            {
                int index1 = s[0]-'a';
                int index2 = s[3]-'a';
                if (uf.find(index1)==uf.find(index2))
                {
                    return false;
                }
                
            }
            
        }
        return true;
    }
};
// @lc code=end

