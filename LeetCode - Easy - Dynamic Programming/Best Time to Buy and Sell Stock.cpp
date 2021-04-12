class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int nn = prices.size();
        vector<int>dp(nn , 0);
        dp[0] = 0;
        for(int i = 1 ; i < prices.size() ; i++)
        {
            dp[i] = max(prices[i] - prices[i - 1] + dp[i - 1] , dp[i]);
        }
        
        return *max_element(dp.begin() , dp.end());
    }
};
