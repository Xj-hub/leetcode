/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <stdlib.h>
#include <memory.h>

using namespace std;
class Solution {
private: 
    vector<int> getLPS(string needle){
        int n = needle.size();
        int i = 0, j = 1;
        vector<int> lps(n ,0);
        while(j < n){
            if(needle[j] == needle[i]){
                lps[j] = i+1;
                i++;
                j++;
            }      
            else {
                lps[j] == 0;
                i = i > 0 ? lps[i-1] : 0;
            }     
        }
        return lps;
    }
    
public:
    int strStr(string haystack, string needle) {
        vector<int> lps = getLPS(needle);
        for(int i : lps){
            cout<<i<<" ";
        }

        int m = haystack.size();
        int n = needle.size();
        if(!n){
            return 0;
        }
        int i = 0, j = 0;
        while(i < m){
            if(haystack[i] == needle[j]){
                i++, j++;
            }
            if(j ==n){
                return i - j;
            }
            if(i < m && haystack[i] != needle[j]){
                if(j == 0){
                    i++;
                }
                else{
                    j = lps[j-1];
                }
            }
        }
        return -1;

    }
};
// @lc code=end

