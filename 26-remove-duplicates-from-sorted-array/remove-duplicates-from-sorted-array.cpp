class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        v.push_back(nums[0]);
        for(int i = 1; i < n; i++ ) { 
            if(v.back() != nums[i]){
                v.push_back(nums[i]);
            }
        }
        // for(auto it : v)cout<<it<<" ";
        for(int i = 0; i < v.size(); i++){
            nums[i] = v[i];
        }
        return v.size();
    }
};