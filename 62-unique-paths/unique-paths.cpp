class Solution {
public:
    int path(int n, int m, vector<vector<int>>&dp){
        if(n==0 || m==0)return 1;
        if(n<0 || m<0)return 0;

        if(dp[n][m]!=-1)return dp[n][m];
        return dp[n][m]=path(n-1,m,dp)+path(n,m-1,dp);
    }
    int uniquePaths(int n, int m) {
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return path(n-1,m-1,dp);
    }
};