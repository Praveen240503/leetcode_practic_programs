class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {  
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        cout.tie(nullptr);

        vector<int> tr;
        for(int i = 0; i < nums.size(); i ++){
            nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
            // cout<<nums[abs(nums[i])-1] <<" ";
            if(nums[abs(nums[i])-1] > 0) tr.push_back(abs(nums [i]));
        }
        return tr;
    }
};