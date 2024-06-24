class Solution {
public:
    bool canJump(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int canGo = 0;
        int pos = 0;
        while(pos < nums.size()){
            canGo = max(pos + nums[pos],canGo);
            if(pos >= canGo)break;
            pos++;
        }
        return canGo>=nums.size()-1;
    }
};