class Solution {
public:
    int canWePlace(vector<int>& arr, int dist, int balls) {
        int count = 1;
        int last = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - last >= dist) {
                count++;
                last = arr[i];
            }
            if (count >= balls) {
                return 1;
            }
        }
        return 0;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int low = 1;
        int high = (position.back() - position[0]) / (m - 1);
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canWePlace(position, mid, m)) {
                ans = mid;
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        return ans;
    }
    
};