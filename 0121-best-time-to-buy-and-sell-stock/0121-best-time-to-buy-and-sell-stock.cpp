class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0],sell = 0,profit = 0;

        for(int i = 1; i < prices.size(); i++){
            sell = max(buy,prices[i]);
            profit = max(profit, sell - buy);
            buy = min(buy, prices[i]);
        }
    return profit< 0 ? 0 : profit;
    }
};