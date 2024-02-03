class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>tr(256,-1);
        int m=0,l=0;
        for(int i=0;i<s.size();i++){
            if(tr[s[i]]!=-1){
                
                l=max(l,tr[s[i]]+1);
            }

            tr[s[i]]=i;
            m=max(m,i-l+1);
            // cout<<m<<"\n";
        }
        
        return m;

    }
};