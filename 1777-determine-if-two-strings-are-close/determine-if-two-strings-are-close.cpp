class Solution {
public:
    bool closeStrings(string w1, string w2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        if(w1.size()!=w2.size())return 0;
        for(int i=0;i<w1.size();i++){
            mp1[w1[i]]++;
            mp2[w2[i]]++;
        }
        for(auto it:w1){
            if(mp2[it]==0)return 0;
        }
        for(auto it:w2){
            if(mp1[it]==0)return 0;
        }

        vector<int>tr1(w1.size(),0);
        vector<int>tr2(w2.size(),0);
        for(auto it:mp1)tr1.push_back(it.second);
        for(auto it:mp2)tr2.push_back(it.second);
        sort(tr1.begin(),tr1.end());
        sort(tr2.begin(),tr2.end());

        for(int i=0;i<tr1.size();i++){
            if(tr1[i]!=tr2[i])return 0;
        }
        return 1;
    }
};