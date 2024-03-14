class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        int i = 0, j = 0;
        int t = 0, n = nums.size(), c = 0;
        while(j < n){
            for(int i = j; i < n; i++) {
                t += nums[i];
                if(t == goal) {
                    c++;
                    i++;
                    while(i < n and nums[i] == 0){
                        c++;
                        i++;
                    }
                    break;
                }
            }
            t = 0;
            j++;
        }
        return c;
    }
};