class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jump = 0, curend = 0 , reach = 0;
        for(int i = 0 ; i < n-1 ; i++){
            reach = max(reach , i + nums[i]);
            if(i == curend){
                jump++;
                curend = reach;
            }
        }
        return jump;
    }
};