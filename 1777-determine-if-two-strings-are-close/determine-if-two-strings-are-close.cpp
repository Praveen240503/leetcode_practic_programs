class Solution {
public:
    bool closeStrings(string w1, string w2) {
        map<char,int>mp1;
        map<char,int>mp2;

        for(int i=0;i<w1.size();i++){
            mp1[w1[i]]++;
        }

        
        for(int i=0;i<w2.size();i++){
            mp2[w2[i]]++;
        }

        // for(auto it:mp1)cout<<it.first<<":"<<it.second;
        // for(auto it:mp2)cout<<it.first<<":"<<it.second;
        for(int i=0;i<w1.size();i++){
            if(mp2[w1[i]]==0)return 0;
        }
        for(int i=0;i<w2.size();i++){
            if(mp1[w2[i]]==0)return 0;
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