/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <stdlib.h>
#include <memory.h>

using namespace std;


// discards all leading whitespaces
// sign of the number
// overflow
// invalid input
class Solution {
public:
    int myAtoi(string str) {
        int sign = 1;
        int size = str.size();
        int i = 0;
        while(i < size && str[i] == ' '){
            i++;
        }
        if(i == size) return 0;
        if(str[i] == '-'||str[i] == '+') {
            if(str[i] == '-') sign = -1;
            i++;
        }
        int res = 0;
        while(i < size && isdigit(str[i])){
            int temp = str[i] - '0';
            if(res > INT_MAX/10 || (res == INT_MAX/10 && temp >7)){
                // > INT_MAX
                if((res > INT_MAX/10 || (res == INT_MAX/10 && temp >=8))
                 && sign == -1) return INT_MIN;// >= -INT_MIN and sign is -1
                return INT_MAX;
            }
            res = res * 10 + temp;
            i++;
        }
        return sign * res;
    }
};
// @lc code=end

