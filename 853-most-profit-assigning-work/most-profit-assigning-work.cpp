class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<int,int>mp;
        int n = difficulty.size();
        for(int i = 0; i < n; i++){
            mp[difficulty[i]] = max(mp[difficulty[i]],profit[i]);
        }
        int ans = 0;
        // for(auto it: mp)cout<<it.first<<" "<<it.second<<"\n";
        sort(difficulty.begin(), difficulty.end());
        sort(worker.begin(), worker.end());
        int m = worker.size();
        int j = 0 , fl = 0;
        for(int i = 0; i < m; i++){
            while(j < n && worker[i] >= difficulty[j] ){
                fl = max(fl, mp[difficulty[j]]);
                j++;
            }
            ans += fl;
        }
        return ans;
    }
};