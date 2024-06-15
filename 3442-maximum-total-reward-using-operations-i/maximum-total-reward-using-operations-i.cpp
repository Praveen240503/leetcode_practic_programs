class Solution {
public:
    int func(int ind , int total, vector<int>&rewardValues, int n, vector<vector<int>>&dp){
        if(ind >= n)return total;
        if(total > rewardValues.back())return total;
        if(dp[ind][total] != -1) return dp[ind][total];
        // pick
        int left = (total < rewardValues[ind]) ? func(ind +1, total + rewardValues[ind],rewardValues,n, dp):total;


        // non pick
        int right = func(ind+1, total, rewardValues , n,dp);

        return dp[ind][total] = max(left, right);
    }
    int maxTotalReward(vector<int>& rewardValues) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n = rewardValues.size();
        sort(rewardValues.begin(), rewardValues.end());
        int maxi = rewardValues.back();
        cout<< maxi;
        vector<vector<int>>dp(n+1,vector<int>(4000+1,-1));
        // cout<<maxi;
        return func(0,0,rewardValues,n, dp);
    }
};