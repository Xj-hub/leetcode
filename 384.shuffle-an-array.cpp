/*
 * @lc app=leetcode id=384 lang=cpp
 *
 * [384] Shuffle an Array
 */

// @lc code=start
class Solution {
private:
    vector<int> origin;
    vector<int> array;
    int randInRange(int l, int r){
        return l + rand()%(r-l + 1);
    }
public:
    Solution(vector<int>& nums) {
        origin = nums;
        array = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return origin;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        int size = array.size();
        for (int l = 0; l < size; ++l){
            int r = randInRange(l, size -1);
            swap(array[l], array[r]);
        }
        return array;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
// @lc code=end

