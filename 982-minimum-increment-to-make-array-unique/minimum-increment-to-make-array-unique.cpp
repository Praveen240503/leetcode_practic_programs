class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> dums = nums;
        sort(nums.begin(), nums.end());
        // for(auto it : nums)cout<<it<<" ";
        // cout<<"\n";
        int c = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] == nums[i]){
                nums[i] += 1;
            }
            else if( nums[i-1] > nums[i]){
                nums[i] = nums[i] + (nums[i-1] - nums[i]) +1;
            }
        }
        
        // for(auto it : nums)cout<<it<<" ";
        for(int i = 0; i < nums.size(); i++){
            c+= nums[i] - dums[i];
        }
        return c;
    }
};