#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size(), m = t.size();


        vector<vector<int> > f(m + 1, vector<int>(26, 0));
        for (int i = 0; i < 26; i++) {
            f[m][i] = m;
        }
        
        for (int i = m - 1; i >= 0; i--) {
            for (int j = 0; j < 26; j++) {
                if (t[i] == j + 'a')
                    f[i][j] = i;
                else
                    f[i][j] = f[i + 1][j];
            }
        }
    }
};