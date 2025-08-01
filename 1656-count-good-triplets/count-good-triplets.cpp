class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        ios_base::sync_with_stdio();
        cin.tie(NULL);
        cout.tie(NULL);
        int n = arr.size();
        // cout<<n<<" ";
        int ans = 0;
        for(int i = 0 ; i < n-2;i++){
            for(int j = i + 1; j < n - 1; j++){
                if (abs(arr[i] - arr[j]) <= a) {
                    for (int k = j + 1; k < n; k++) {
                        if (abs(arr[j] - arr[k]) <= b &&
                            abs(arr[i] - arr[k]) <= c) {
                            ans++;
                        }
                    }
                }
            }
        }
        return ans;
    }
};