class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>tr;
        map<int,int>mp;
        for(auto it:nums)mp[it]++;
        // for(auto it:mp)cout<<it.first<<"->"<<it.second<<"\n";
        for(auto it:mp)if(it.second==2)tr.push_back(it.first);
        
        return tr;
    }
};