/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int r = s.size()-1, l = 0;
        while(r>l){
            swap(s[l], s[r]);
            l++;
            r--;
        }
        
    }
};
// @lc code=end

