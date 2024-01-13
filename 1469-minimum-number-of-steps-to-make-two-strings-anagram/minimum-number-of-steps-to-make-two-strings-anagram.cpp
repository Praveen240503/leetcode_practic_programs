class Solution {
public:
    int minSteps(string s, string t) {
        int ans=0;
        vector<int>tr(26,0);
        vector<int>tr1(26,0);

        for(int i=0;i<s.size();i++){
            tr[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            tr1[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            ans+=abs(tr[i]-tr1[i]);
        }
        return ans/2;
    }
};