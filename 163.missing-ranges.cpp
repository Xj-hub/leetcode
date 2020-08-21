// Given a sorted integer array nums, where the range of elements are in the inclusive range [lower, upper], return its missing ranges.

class Solution {
public:
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
     vector<string> result;
        
        if(nums.size() == 0){ // Basic check
            result.push_back(getrange(lower,upper));
            return result;
        }
        //1st step 
        if(nums[0] > lower){
            result.push_back(getrange(lower,nums[0] - 1));
        }
        
        // 2nd Step 
        for(int i=0; i < nums.size()-1; i++){
            if (nums[i+1] != nums[i] && nums[i+1] > nums[i] +1) {
                result.push_back(getrange(nums[i]+1, nums[i+1]-1));
            }
        }
        
        // 3rd Step 
        if(nums[nums.size() - 1] < upper){
            result.push_back(getrange(nums[nums.size()-1]+1, upper));
        }
        return result;
    }
    
    private:
    string getrange(int start, int end){
        return start == end ? to_string(start) : to_string(start)+ "->" + to_string(end);
    }
}; 