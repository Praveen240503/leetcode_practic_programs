class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1)return 1;
        map<int,int>mp1;
        map<int,int>mp2;
        for(auto it:trust){
            mp1[it[0]]++;
            mp2[it[1]]++;
        }
        
        for(auto it:mp2){
            if(it.second == n-1 and mp1[it.first]==0){
                return it.first;
            }
        }
        return -1;
    }
};