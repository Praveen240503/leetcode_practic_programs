class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        unordered_set<int>tr;
        for(auto it:mp){
            if(find(tr.begin(),tr.end(),it.second)!=tr.end())return false;
            else tr.insert(it.second);
        }
        return true;
    }
};