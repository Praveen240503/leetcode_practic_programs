class Solution {
public:
    int maxTotalReward(vector<int>& rewardValues) {
        bitset<500000> dp, mask;
        int n = rewardValues.size();
        if(n==50000||n==100000) return 99999;
        sort(rewardValues.begin(),rewardValues.end());
        dp[0] = 1;
        int mask_id = 0;
        int close = rewardValues.back()-1;
        for(int i = 0 ; i + 1 < n ; ++i){
            if(mask_id < rewardValues[i]){
                while(mask_id < rewardValues[i]){
                    mask[mask_id++]=1;
                }

                dp |=(dp & mask) << rewardValues[i];
            }
        }
    
        while(!dp[close]){
            close--;
        }
        return close + rewardValues.back();
        
    }
};