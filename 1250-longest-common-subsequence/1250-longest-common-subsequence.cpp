class Solution {
public:
    int lcs(string& s1, string& s2, int m, int n, vector<vector<int>>& memo)
    {
        //base case
        if(m == 0 || n == 0)
        return 0;

        if(memo[m][n] != -1)
        return memo[m][n];

        //match
        if(s1[m-1] == s2[n-1])
        return memo[m][n] = 1 + lcs(s1, s2, m-1, n-1, memo);

        //not match
        return memo[m][n] = max(lcs(s1, s2, m-1, n , memo) , lcs(s1, s2, m, n-1, memo));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();
        vector<vector<int>> memo(m+1 , vector<int> (n+1 , -1));

        return lcs(text1,text2,m,n,memo);
    }
};