#include <iostream>
#include <vector>
using namespace std;

// vector<string> allSstring(string s)
// {
//     vector<string> res;
//     for (int i = 0; i < s.size(); i++)
//     {
//         for (int j = 1; j < s.size()-i; j++)
//         {
//             res.push_back(s.substr(i,j));
//             cout << s.substr(i, j) << endl;
//         }
        
//     }
//     return res;
       
// }

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int max_len = 1,begin=0;
        if(n<2)
            return s;
        
        vector<vector<int>> dp(n,vector<int>(n));

        // 将长度为1的dp数组赋值为true
        for (int i = 0; i < n; i++)
        {
            dp[i][i]=true;
        }

        for (int L = 1; L <=n; L++)
        {
            for (int i = 0; i < n; i++)
            {
                int j=i+L-1;
                if(j>=n)
                    break;
                if (s[i]!=s[j])
                {
                      dp[i][j]=false;
                }
                else{
                        dp[i][j]=L<=2||dp[i+1][j-1];           
                  }

                if(dp[i][j]&&L>max_len){
                    max_len =  L;
                    begin = i;
                }
            }

            
        }
        return s.substr(begin,max_len);
                
    }
};

int main(){
    string input="abbcd";
    Solution s;
    string output;
    output = s.longestPalindrome(input);
    return 0;
}