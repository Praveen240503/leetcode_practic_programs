class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        deque<int> maxq;
        deque<int> minq;
        int n = nums.size();
        int j = 0;
        int ans = 0;
        for(int i = 0; i < n; i ++){
            // for max element in the window
            while(!maxq.empty() && nums[i] > maxq.back()){
                maxq.pop_back();
            }
            // update the maximum element in the deque
            maxq.push_back(nums[i]);

            // for min element in the window
            while(!minq.empty() && nums[i] < minq.back()){
                minq.pop_back();
            }
            //update the min element in the deque
            minq.push_back(nums[i]);

            // if the limit exceeds 
            if(maxq.front() - minq.front() > limit){
                if(nums[j] == maxq.front()) maxq.pop_front();
                if(nums[j] == minq.front()) minq.pop_front();
                j++;
            }

            // store maximum value in ans
            ans = max(ans, i - j + 1);
        }
        return ans;
    }
};