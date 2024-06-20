auto init = [] () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();
        int ans = INT_MIN;
        int cursum = 0;
        for(int i = 0 ; i < n ; i++){
            cursum += nums[i];
            if(cursum > ans)ans = cursum;
            if(cursum < 0 ) cursum = 0;
        }
        return ans;
    }
};