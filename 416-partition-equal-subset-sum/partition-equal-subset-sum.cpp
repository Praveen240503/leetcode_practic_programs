class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int summ = accumulate(nums.begin(), nums.end(),0);
        // cout<<summ<<" ";
        if(summ%2 != 0)return false;
        int targetsum = summ /2;
        vector<int>dp(targetsum + 1, false);
        dp[0] =true;
        for(auto it: nums){
            for(int i = targetsum ;i >= it;--i){
                dp[i] = dp[i] || dp[i-it];
                if(dp[targetsum])return true;
            }
        }
        return dp[targetsum];
    }
};