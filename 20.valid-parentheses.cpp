/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> map;
        map[')']='(';
        map[']']='[';
        map['}']='{';
        stack<char> stack;
        for(char c:s){
            if(map.count(c)!=0){
                //find }]);
                if (!stack.empty()){
                    char top = stack.top();
                    if (top == map[c]) stack.pop();
                    else return false;
                }
                else{
                    return false;
                }
            }
            else stack.push(c);
        }
        return stack.empty();
    }
};
// @lc code=end

