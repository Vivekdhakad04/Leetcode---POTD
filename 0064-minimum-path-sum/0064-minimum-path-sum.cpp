class Solution {
public:

    bool isSafe(int i, int j, int row,int col)
    {
        if(i >= 0 && j >= 0 && i < row && j < col)
        return true;

    return false;
    }
    int helper(int str,int end, int row,int col, vector<vector<int>>& grid, vector<vector<int>>& dp)
    {
        if(str == row-1 && end == col-1)
        return grid[str][end];

        if(!isSafe(str,end,row,col))
        return INT_MAX;

        if(dp[str][end] != INT_MAX)
        return dp[str][end];

        int profit = grid[str][end] + min({
                                           helper(str+0,end+1,row,col,grid,dp),
                                           helper(str+1,end+0,row,col,grid,dp),
                                           });

        return dp[str][end] = profit;
    }
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        vector<vector<int>> dp(row,vector<int>(col,INT_MAX));
        //dp[0][0] = grid[0][0];
        int result = INT_MAX;

        
        result = min(result , helper(0,0,row,col,grid,dp));
          
    return result;
    }
};