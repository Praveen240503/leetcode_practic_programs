class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        int max_occ = INT_MIN;
        unordered_map<int,int>mp;
        int c = 0;
        for(auto it : nums) {
            mp[it]++;
            if(mp[it] > max_occ){
                max_occ = mp[it];
                c=0;
            }
            if(mp[it] == max_occ)c++;
        }
        return c*max_occ;
    }
};