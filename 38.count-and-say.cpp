/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
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
    string countAndSay(int n) {
        if(n == 1) return "1";
        string str = "1";
        
        for(int i = 2; i <= n; ++i){
            
            int size = str.size();
            string curstr = "";
            for(int j = 0; j < size; ++j){
                int count = 1;
                while(j < size-1 && str[j] == str[j+1]){
                        count++;
                        j++;
                }
                curstr += to_string(count) + str[j];
                
            }
        
            str = curstr;
        }
        return str;
        
    }
};
// @lc code=end

