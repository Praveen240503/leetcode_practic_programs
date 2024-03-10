class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> tr(nums.size());
        int l = 0;
        int r = nums.size() - 1;
        int ind = r;
        while (ind >= 0) {
            if (abs(nums[l]) > abs(nums[r])) {
                tr[ind] = nums[l] * nums[l];
                l++;
                ind--;
            } else {
                tr[ind] = nums[r] * nums[r];
                r--;
                ind--;
            }
        }
        return tr;
    }
};