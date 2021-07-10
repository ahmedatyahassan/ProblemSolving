class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
      int n = nums.size();
        
        int dp[n + 3];
        dp[0] = 1;
        int ans = 1;
        for(int i = 1 ; i < n ; i++)
        {
            int mx = 0;
            
            for(int j = 0 ; j < i ; j++)
            {
                if(nums[i] > nums[j])
                    mx = max(dp[j] , mx);
            }
            
            dp[i] = mx + 1;
            ans = max(ans , dp[i]);
        }
        
        return ans;
    }
};
