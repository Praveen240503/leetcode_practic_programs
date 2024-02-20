class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int a = accumulate(nums.begin(), nums.end(),0);
        // cout<<a;
        // cout<<;
        return (n*(n+1)/2) - a;
    }
};