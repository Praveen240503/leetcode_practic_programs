class Solution {
public:
    int prep(int i,int j,string s){
        int ans=0;
        while(i>=0 and j<s.size() and s[i]==s[j]){
            ans++;
            i--;
            j++;
        }
        return ans;
    } 
    int countSubstrings(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=prep(i,i,s);
            ans+=prep(i,i+1,s);
        }
        return ans;

    }
};