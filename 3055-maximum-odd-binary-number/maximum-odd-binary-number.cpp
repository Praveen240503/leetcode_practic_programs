class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(s.rbegin(), s.rend());
        // cout<<s;
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i]=='1')swap(s[i], s[s.size()-1]);
        }
        
        return s;
    }
};