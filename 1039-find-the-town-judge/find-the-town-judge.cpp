class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if(n==1)return 1;
        vector<int>tr1(n+1,0);
        vector<int>tr2(n+1,0);
        for(auto it:trust){
            tr1[it[1]]++;
            tr2[it[0]]++;
        }
        
        for(int i=0;i<=n;i++){
            if(tr1[i]==n-1 and tr2[i]==0)return i;
        }
        return -1;
    }
};