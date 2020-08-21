/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        static unordered_map<char, int> values;
    
    
        values.insert({'M', 1000});
        values.insert({'D', 500});
        values.insert({'C', 100});
        values.insert({'L', 50});
        values.insert({'X', 10});
        values.insert({'V', 5});
        values.insert({'I', 1});
        values.insert({'E', 0});
        s += 'E';
        int len = s.size();
        int sum = 0;
        for(int i = 0; i < len-1; ++i){
            if(values[s[i]] < values[s[i+1]] ){
                sum += values[s[i+1]] - values[s[i]];
                i++;
            }
            else{
                sum += values[s[i]];
            }


        }
        return sum;

    
    }
};
// @lc code=end

