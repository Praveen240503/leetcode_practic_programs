class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int fo=-1,lo=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                fo=i;
                break;
            }   
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target){
                lo=i;
                break;
            }
        }
        return {fo,lo};
    }
};