class Solution {
public:
    int mod=1000000007;
    int dfs(int n,int k,vector<vector<int>>&dp){
        if(n==0){
            if(k==0){
                return 1;
            }
            return 0;
        }

        if(k==0)return 1;
        if(dp[n][k]!=-1)return dp[n][k];
        int c=0;
        for(int i=0;i<=min(n-1,k);i++){
            c = (c%mod + dfs(n-1,k-i,dp)%mod) % mod;
        }
        return dp[n][k]=(c % mod);
    }
    int kInversePairs(int n, int k) {
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        return dfs(n,k,dp);
    }
};