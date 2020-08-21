/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
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
    int firstUniqChar(string s) {
        int res = 0;
        int size = s.size();
        int alpha[26];
        for(int i = 0; i < 26; ++i){
            alpha[i] = -1;
        }
        
        for(int i = 0; i < size; i++){
            if(alpha[s[i] - 'a'] == -1){
                alpha[s[i] - 'a'] = i;
            }
            else 
                alpha[s[i] - 'a'] = -2;
        }

        for(int i = 0; i< size; i++){
            if (alpha[s[i] - 'a'] !=-2 && alpha[s[i] - 'a'] != -1){
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end

