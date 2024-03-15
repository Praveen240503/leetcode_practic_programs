class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n = nums.size();
        vector<int>tr(n,0);
        vector<int>zero;
        
        for(int i = 1; i < n; i++) {
            // temp *= nums[i];
            if(nums[i] == 0)zero.push_back(i);
        }
        if(zero.size() == 0){
            int temp = 1;
            for(int i = 1; i < n; i++) {
                temp *= nums[i];
            }
            // cout<<temp;
            tr[0] = temp;
            for(int i = 1; i < n; i++) {
                int tem = (tr[i-1] * nums[i-1]) / nums[i];
                tr[i] = tem;
            }
        }
        if(zero.size() == 1){
            int tem = 1;
            for(int i = 0; i < n; i++ ) {
                if(i != zero[0])tem *= nums[i];
            }
            tr[zero[0]] = tem;
            tem = 1;
        }
        return tr;
    }
};