/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 反转字符串中的单词
 */

#include <iostream>
#include <vector>
#include<stack>
using namespace std;


// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word="";
        string s2="";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]==' '){
                if(word!="")
                    st.push(word);
                word = "";
                continue;
            }
            word+=s[i];
            if(i==s.size()-1)
                st.push(word);
        }
        s2 = st.top();
        st.pop();
        while (!st.empty())
        {
            s2+=" ";
            s2+=st.top();
            st.pop();
        }
        return s2;
        
    }
};
// @lc code=end

