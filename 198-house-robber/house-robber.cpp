class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0];
        int prev1=0;
        for(int i=1;i<n;i++){
            int take = nums[i];
            if(i>1)take += prev1;
            int nontake = 0 + prev;
            int curi = max(take,nontake);
            prev1 = prev;
            prev = curi;
        }
        return prev;

    }
};