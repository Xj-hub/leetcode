/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
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
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        int n = strs.size();
        if (n == 0|| strs[0] == "") return "";
        int index = 0;
        string first = strs[0];
                    
        while(index <=first.size()-1){
            
            char prefix = first[index];
            int i;
            for(i = 1; i < n; i++){
                if(index >= strs[i].size())
                    //index > strs[i].size() - 1 is wrong
                    //never do strs.length() -1 . if size is 0 then 0-1 will not be -1 instead it will be a large number. since the size of vector is a unsigned number;
                    return res;
                else{
                    if(prefix != strs[i][index])
                        return res;
                }
            }
            if(i == n) res+= prefix;
            index++;
        }
        return res;
    }
};
// @lc code=end

