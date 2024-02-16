class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL);
        cout.tie(NULL);
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<int>tr;
        for(auto it:mp){
            tr.push_back(it.second);
        }
        
        sort(tr.begin(),tr.end());
        int c=0;
        for(int i=0;i<tr.size();i++){
            k-=tr[i];
            if(k<0)c++;
        }
        
        return c;
    }
};