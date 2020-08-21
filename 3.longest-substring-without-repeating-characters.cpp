/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0;
        int n = s.size();
        int len = 0;
        unordered_map<char, int> map;
        while(r < n){
            char cur = s[r];
            r++;
            while(map.find(cur)!= map.end()){
                map.erase(s[l]);
                l++;
            }
            map[cur]++;
            len = max(len, r - l);
        }
        return len;

    }
};
// @lc code=end

