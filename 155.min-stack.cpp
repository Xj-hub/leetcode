/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */

// @lc code=start
class MinStack {
private:
    stack<pair<int, int>> stack;
public:

    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        if(stack.empty()){
            stack.push(make_pair(x,x));
        }
        else{
            stack.push(make_pair(x, min(stack.top().second , x)));
        }
    }
    
    void pop() {
        stack.pop();
    }
    
    int top() {
        return stack.top().first;
    }
    
    
    int getMin() {
        return stack.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

