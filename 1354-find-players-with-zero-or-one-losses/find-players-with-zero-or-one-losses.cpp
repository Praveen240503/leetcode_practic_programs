class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int>tr1;
        vector<int>tr2;
        int n=matches.size();
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0;i<n;i++){
            mp1[matches[i][0]]++;
        }
        for(int i=0;i<n;i++){
            mp2[matches[i][1]]++;
        }

        for(auto it:mp1){
            if(mp2[it.first]==0)tr1.push_back(it.first);

        }
        
        for(auto it:mp2){
            if(it.second==1)tr2.push_back(it.first);
            
        }
        return {tr1,tr2};
    }
};