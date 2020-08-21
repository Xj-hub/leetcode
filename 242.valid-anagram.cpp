/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
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
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int size = s.size();
        int alpha[26];
        memset(alpha, 0, sizeof(alpha));
        for (int i = 0; i < size; ++i){
            alpha[s[i]-'a'] ++;
            alpha[t[i]-'a'] --;
        }
        for(int i :alpha){
            if (i != 0)
            return false;
        }
        return true;
    }
};
// @lc code=end

