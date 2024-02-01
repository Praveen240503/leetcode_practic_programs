class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>tr;
        vector<int>temp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            temp.push_back(nums[i]);
            if(temp.size()==3){
                tr.push_back(temp);
                temp.clear();
            }
        }
        for(int i=0;i<tr.size();i++){
            int a=abs(tr[i][0]-tr[i][1]);
            int b=abs(tr[i][0]-tr[i][2]);
            if((a>k or b>k))return {};
        }

        return tr;
    }
};