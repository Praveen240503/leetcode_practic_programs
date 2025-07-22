class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr); 
        unordered_set<int> set;

        int n = nums.size();
        int left = 0;

        int maxSum = 0, tempSum = 0;
        for (int i = 0; i < n; i++) {
            int val = nums[i];

            while (set.find(val) != set.end()) {
                set.erase(nums[left]);
                tempSum -= nums[left];
                left++;
            }
            set.insert(val);
            tempSum += val;
            maxSum = std::max(maxSum, tempSum);
        }

        return maxSum;
    }
};