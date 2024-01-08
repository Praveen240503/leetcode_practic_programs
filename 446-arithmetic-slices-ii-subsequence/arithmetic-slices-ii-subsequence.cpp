class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        long long int c=0,x=0,ans=0,a=0,b=0;
        vector<map<long long int, long long int>>tr;
        map<long long int,long long int>k;
        tr.push_back(k);

        for(int i=1;i<n;i++){
            tr.push_back(k);
            for(int j=0;j<i;j++){
                c=1;
                a=nums[i];
                b=nums[j];
                x=a-b;
                c+=tr[j][x];
                tr[i][x]+=c;
            }
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                a=nums[i];
                b=nums[j];
                x=a-b;
                ans+=tr[j][x];
            }
            
        }
        return ans;
    }
};