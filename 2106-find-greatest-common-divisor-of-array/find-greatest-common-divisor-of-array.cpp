class Solution {
public:
    int gcd(int mini, int maxi){
        while(mini > 0 and maxi>0){
            if(mini > maxi) mini%=maxi;
            else maxi%=mini;
        }
        if(mini == 0)return maxi;
        return mini;
    }
    int findGCD(vector<int>& nums) {
        int mini = INT_MAX, maxi = INT_MIN;
        for(auto it:nums){
            if(it>maxi)maxi=it;
            if(it<mini)mini=it;
        }
        
        // cout<<mini<<" "<<maxi;

        return gcd(mini, maxi);
    }
};