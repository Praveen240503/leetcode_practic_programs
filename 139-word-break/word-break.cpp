class Solution {
public:
    int dp[1001];
    bool bunch(int i, string &s , set<string> & st){
        if(i==s.size())return dp[i]=1;
        if(dp[i] != -1) return dp[i];
        string temp;
        for(int j = i; j <= s.size(); j++){
            temp+=s[j];
            if(st.find(temp) != st.end())
            if(bunch(j+1, s, st))return true;
        }
        return dp[i] = 0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        memset(dp,-1,sizeof(dp));
        set<string>st;
        for(auto it : wordDict){
            st.insert(it);
        }
        return bunch(0,s,st);
    }
};