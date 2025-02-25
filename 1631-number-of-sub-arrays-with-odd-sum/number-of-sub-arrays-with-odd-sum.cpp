class Solution {
public:
    int MOD = 1e9 + 7;
    int numOfSubarrays(vector<int>& arr) {
        ios_base::sync_with_stdio;
        cin.tie(NULL);
        cout.tie(NULL);
        int count = 0, prefixSum = 0;
        int oddCount = 0, evenCount = 1;

        for (int num : arr) {
            prefixSum += num;
            if (prefixSum % 2 == 0) {
                count += oddCount;
                evenCount++;
            } else {
                count += evenCount;
                oddCount++;
            }
            count %= MOD;
        }

        return count;
    }
};