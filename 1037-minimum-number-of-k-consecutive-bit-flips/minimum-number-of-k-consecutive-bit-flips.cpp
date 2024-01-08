class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n=nums.size(),ans=0,turn=0;
        for(int i=0;i<n;i++){
            if(turn % 2 == nums[i]){
                if(i>n-k)return -1;
                turn++;
                ans++;
                nums[i]-=2;
            }
            if(i>=k-1 && nums[i-k+1]<0){
                turn++;
                nums[i-k+1]+=2;
            }
        }
        return ans;

    }
};