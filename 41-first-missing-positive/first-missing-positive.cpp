class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=1;
        for(int i=0;i<n;i++){
            if(nums[i]>ans){
                return ans;
            }
            if(nums[i]==ans)ans++;
        }
        return ans;
    }
};