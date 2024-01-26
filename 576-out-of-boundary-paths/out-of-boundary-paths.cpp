class Solution {
public:
    int M=1e9+7;
    int dp[51][51][51];
    int solve(int n, int m, int maxMove, int startRow, int startColumn){

        if(startColumn<0 || startColumn>=n || startRow<0 || startRow>=m)return 1;

        if(dp[startRow][startColumn][maxMove]!=-1)return dp[startRow][startColumn][maxMove];
        int up=0,down=0,left=0,right=0;
        if(maxMove>0)up=solve(n, m, maxMove-1, startRow-1, startColumn)%M;
        if(maxMove>0)down=solve(n, m, maxMove-1, startRow+1, startColumn)%M;
        if(maxMove>0)left=solve(n, m, maxMove-1, startRow, startColumn-1)%M;
        if(maxMove>0)right=solve(n, m, maxMove-1, startRow, startColumn+1)%M;

        return dp[startRow][startColumn][maxMove]=((up%M+down%M)%M+(left%M+right%M)%M)%M;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp,-1,sizeof(dp));
        return solve(n, m, maxMove, startRow, startColumn);
    }
};