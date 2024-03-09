class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        int n = nums1.size(), m = nums2.size();
        int i = 0, j = 0, ans = INT_MAX;
        while(i < n and j < m) {
            if(nums1[i] == nums2[j]){
                ans = min(ans, nums2[j]);
            }
            if(nums1[i] < nums2[j])i++;
            else j++;
        }
        if(ans == INT_MAX)return -1;
        return ans;
    }
};