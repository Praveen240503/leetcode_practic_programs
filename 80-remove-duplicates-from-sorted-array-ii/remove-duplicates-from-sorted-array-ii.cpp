auto inti = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count  = 0;
        int n = nums.size();
        for(int i = 1; i < n-1; i++){
            if(nums[i-1] == nums[i] && nums[i+1] == nums[i]){
                nums[i-1] = 10001;
                // j+=2;
                count++;
            }
        }
        sort(nums.begin(), nums.end());
        return n-count;
    }
};