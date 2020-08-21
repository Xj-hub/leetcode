/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int size = s.size();
        if(size <= 1) return s;
        bool dp[size][size];
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i < size; ++i){
            dp[i][i] = true;
        }

        int start = 0, len = 1;
        for(int i = size-2; i>=0; --i){
            for(int j = i+1; j < size; ++j){
                if(s[i] == s[j]){
                    if(j - i == 1 || dp[i+1][j-1] == true){
                        dp[i][j] = true;
                    
                        if(j - i + 1 >= len){
                            len = j -i + 1;
                            start = i;
                        }
                    }
                }
            }
        }
        return s.substr(start, len);

    }
};
// @lc code=end

