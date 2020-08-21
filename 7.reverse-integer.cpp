/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <limits.h>
// using namespace std;

class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while(x != 0){
            int pop = x%10;
            x/= 10;
            if(res >INT_MAX/10 || (res==INT_MAX/10 && pop > 7)) return 0;
            if(res <INT_MIN/10 || (res==INT_MIN/10 && pop < -8)) return 0;
            res = 10 * res + pop;
        }
        return res;    
    }
};
// @lc code=end

