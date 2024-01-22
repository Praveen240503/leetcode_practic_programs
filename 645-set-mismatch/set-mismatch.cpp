class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int m=n*(n+1)/2;
        sort(nums.begin(),nums.end());
        int a=nums[0],rep=0;
        
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i])rep=nums[i];
            a+=nums[i];
        }
        return {rep,m-a+rep};

    }
};