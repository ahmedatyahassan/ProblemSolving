class NumArray {
public:
    
    int dp[(int)1e5 + 9];
    NumArray(vector<int>& nums) {
        int nn = nums.size();
        dp[0] = nums[0];
        for(int i = 1 ; i < nn ; i++)
        {
            dp[i] = dp[i - 1] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0)
            return dp[right];
        
        else
            return (dp[right] - dp[left - 1]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */


// 1 2 3 4 5
// 1 3 6 10 15


// [2:4]
