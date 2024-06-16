class Solution {
public:
    int maxProfit(vector<int>& p) {
        int j=0;
        int n=p.size();
        int ans=0,ma=0;
        for(int i=1;i<n;i++)
        {
            if(p[j]>p[i])j=i;
            else{
                ma=p[i]-p[j];
                
            }
            ans=max(ans,ma);
        }
        return ans;
    }
};