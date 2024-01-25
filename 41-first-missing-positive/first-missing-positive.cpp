class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=1;
        for(int i=0;i<n;i++){
            if(nums[i]>ans){
                return ans;
            }
            if(nums[i]<0)continue;
            if(nums[i]==ans)ans++;
        }
        return ans;
    }
};