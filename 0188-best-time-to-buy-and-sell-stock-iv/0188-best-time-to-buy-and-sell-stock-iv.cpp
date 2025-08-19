class Solution {
public:
    int helper(vector<int>& prices, int idx, int buy, int k, vector<vector<vector<int>>>& dp){
        //base case
        if(k <= 0 || idx >= prices.size())
        return 0;

        if(dp[idx][buy][k] != -1)
        return dp[idx][buy][k];

        int profit = 0;

        if(buy){
            profit = max((-prices[idx] + helper(prices, idx+1, 0, k, dp)) , 0 + helper(prices, idx+1, 1 , k , dp));
        }
        else{
            profit = max((prices[idx] + helper(prices, idx+1, 1 , k-1, dp)) , 0 + helper(prices, idx+1, 0 , k , dp));
        }

    return dp[idx][buy][k] = profit;
    }
    
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2,vector<int>(k+1 , -1)));
        return helper(prices,0,1,k,dp);
    }
};