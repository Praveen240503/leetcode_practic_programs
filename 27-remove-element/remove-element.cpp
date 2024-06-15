class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==val){
                c++;
                nums[i] = 51;
            }
        }
        sort(nums.begin(), nums.end());
        // for(auto it:nums)cout<<it<<" ";
        return nums.size()-c;

    }
};