class Solution {
public:
    int minSteps(string s, string t) {
        int ans=0;
        map<char,int>smap;
        map<char,int>tmap;
        for(int i=0;i<s.size();i++){
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        
        // for(auto it:smap)cout<<it.first<<" "<<it.second<<"\n";
        // for(auto it:tmap)cout<<it.first<<" "<<it.second<<"\n";
        
        for(auto it:smap){
            int a = tmap[it.first];
            int b = it.second;
            if(a<b)ans+=abs(a-b);
        }
        return ans;
    }
};