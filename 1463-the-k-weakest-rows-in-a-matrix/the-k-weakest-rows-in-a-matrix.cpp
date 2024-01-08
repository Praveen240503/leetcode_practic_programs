class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>tr;
        vector<int>ans;
        int n=mat.size();
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<mat[i].size();j++){
                c+=mat[i][j];
            }
            tr.emplace_back(c,i);
        }
        sort(tr.begin(),tr.end());
        for(auto it:tr)cout<<it.first<<" "<<it.second<<"\n";
        for(int i=0;i<k;i++){
            ans.push_back(tr[i].second);
        }
        return ans;
    }
};