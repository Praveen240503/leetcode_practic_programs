class Solution {
public:
    vector<int> getpivind(vector<int>&nums, int pivot){
        int x = 0, c = 0;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] == pivot){
                x = i;
                c++;
            }
        }
        return {x,c};
    }
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        ios_base::sync_with_stdio;
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int>left,right;
        vector<int> piv = getpivind(nums, pivot);
        int n = nums.size();
        for(int i = 0 ; i < n ; i++) {
            if(nums[i] < nums[piv[0]]){
                left.push_back(nums[i]);
            }
            if(nums[i] >nums[piv[0]]) {
                right.push_back(nums[i]);
            }
        }
        // cout<<piv[0]<<" "<<piv[1]<<" \n";
        // cout<<"\n";
        // for(auto it:left)cout<<it<<" ";
        // for(auto it:right)cout<<it<<" ";
        // int x = piv[1];
        
        vector<int>pivv(piv[1], pivot);
        left.insert(left.end(), pivv.begin(), pivv.end());
        
        left.insert(left.end(), right.begin(), right.end());
        return left;
    }
};