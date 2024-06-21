class Solution {
public:
    int solve(vector<vector<int>>& tri,int x,int y, vector<vector<int>>&dp){
        if(x >= tri.size())return 0;
        if(dp[x][y] != -1)return dp[x][y];
        return dp[x][y] = min(tri[x][y] + solve(tri, x+1, y, dp),tri[x][y] + solve(tri, x+1, y+1, dp));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>>dp(n, vector<int>(n,-1));
        // memset(dp,-1,sizeof(dp));
        return solve(triangle,0,0, dp);
    }
};