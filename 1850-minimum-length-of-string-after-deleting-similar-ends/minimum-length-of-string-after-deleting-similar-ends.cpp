class Solution {
public:
    int minimumLength(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n = 0, m = s.size()-1;

        while(n < m and s[n] == s[m]){
            char tem = s[n];
            while(n <= m and s[n] == tem)n++;
            while(n <= m and s[m] == tem)m--;
        }
        return m-n+1;
    }
};