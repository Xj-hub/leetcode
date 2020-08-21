/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
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
public:
    bool isPalindrome(string s) {
        int size = s.size();
        int r = s.size() - 1, l = 0;
        while(l < r){
            if(!isalnum(s[l])){
                l++;
                continue;
            }

            if(!isalnum(s[r])){
                r--;
                continue;
            }

            if(l < r && tolower(s[r]) != tolower(s[l])){
                return false;
            }
            r--;
            l++;
        }   
        return true;     
    }
};
// @lc code=end

