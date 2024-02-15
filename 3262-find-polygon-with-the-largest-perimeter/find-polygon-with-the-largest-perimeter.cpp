class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL);
        cout.tie(NULL);
        sort(nums.begin(),nums.end());
        long long ans=INT_MIN,n=nums[0];
        int f=0;
        for(int i=1;i<nums.size();i++){
            // n+=nums[i];
            if(n>nums[i]){
                ans=max(ans,n+nums[i]);
                f=1;
                // cout<<n<< " "<< ans<<" ";
            }
            n+=nums[i];
        }
        if(f==0)return -1;
        return ans;
    }
};