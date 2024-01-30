class Solution {
public:
    int path(vector<vector<int>>& ob,vector<vector<int>>& dp,int n,int m){
        if(m<0||n<0){
            return 0;
        }
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        if(ob[n][m]==1){
            return dp[n][m]=0;
        }
        return dp[n][m]=path(ob,dp,n-1,m)+path(ob,dp,n,m-1);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& ob) {
        int n=ob.size(), m= ob[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        if(ob[0][0]==0){
            dp[0][0]=1;
        }
        return path(ob,dp,n-1,m-1);
    }
    
};