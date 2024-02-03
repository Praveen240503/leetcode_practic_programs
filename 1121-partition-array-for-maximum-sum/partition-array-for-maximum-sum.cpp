class Solution {
public:
    int dfs(vector<int>&arr,int &k,int i,vector<int>&dp){
        if(i==arr.size())return 0;
        if(dp[i]!=-1) return dp[i];
        int a=INT_MIN,b=INT_MIN;
        for(int j=i;j<arr.size() and j<i+k ; j++){
            a=max(a,arr[j]);
            int l=j-i+1;
            b=max(b,l*a+dfs(arr,k,j+1,dp));
        }
        return dp[i]=b;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>dp(n,-1);
        return dfs(arr,k,0,dp);
    }
};