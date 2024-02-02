class Solution {
public:
    int Fun( int n, int k , vector<int>&tr,vector<int>&dp){
        if(k==0)return 0;
        if(dp[k]!=-1)return dp[k];
        int ans=1e9;
        for(int i=0;i<n;i++){
            if(tr[i]<=k){
                ans=min(ans,1+Fun(n,k-tr[i],tr,dp)) ;
            }
        }
        return dp[k]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int>dp(amount+1,-1);
        if(amount==0)return 0;
        int a=Fun(n,amount,coins,dp);
        if(a==1e9)return -1;
        return a;
    }
};