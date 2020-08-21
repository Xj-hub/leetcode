/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res(n, "");
        for(int i = 1; i < n+1; i++){
            int index = i - 1;
            if(i%3 == 0 && i %5 == 0){
                res[index] = "FizzBuzz";
            }
            else if (i%3 == 0){
                res[index] = "Fizz";
            }
            else if (i % 5 == 0){
                res[index] = "Buzz";
            }
            else res[index] = to_string(i);
        }
        return res;
    }
};
// @lc code=end

