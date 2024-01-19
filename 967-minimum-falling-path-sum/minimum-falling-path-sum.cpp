class Solution {
public:
    int helper(vector<vector<int>>&matrix, vector<vector<int>> &dp, int i,int j, int n){
        if(i<0 || j<0 || i>=n || j>=n)return INT_MAX;
        if(i==n-1) return matrix[i][j];
        if(dp[i][j]!= -111)return dp[i][j];
        int l=helper(matrix,dp,i+1,j+1,n);
        int h=helper(matrix,dp,i+1,j-1,n);
        int m=helper(matrix,dp,i+1,j,n);
        // cout<<" "<<l<<" "<<h<<" "<<m;
        // int mi=INT_MAX;
        
        
        int mi=min({l,h,m});
        if(mi==INT_MAX) mi=matrix[i][j];
        return dp[i][j]=mi+matrix[i][j];
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int  n = matrix[0].size(),mi=INT_MAX;
        vector<vector<int>>dp(n+1,vector<int>(n,-111));
        for(int i=0;i<n;i++)mi=min(mi, helper(matrix, dp , 0 , i, n));
        return mi;
    }
};