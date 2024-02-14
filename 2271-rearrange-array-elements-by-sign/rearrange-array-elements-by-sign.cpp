class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL);
        int n=nums.size();
        vector<int>tr(n,0);
        int p=0,m=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                tr[p]=nums[i];
                p+=2;
            }
            else{
                tr[m]=nums[i];
                m+=2;
            }
        }
        return tr;
    }
};