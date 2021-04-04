class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      
    
        int first = lower_bound(nums.begin() , nums.end() , target) - nums.begin();
        int last = upper_bound(nums.begin() + first , nums.end() , target) - nums.begin();
     
        if(last - 1 < first)
            return {-1 , -1};
        else
            return {first , last - 1};
    }
};
