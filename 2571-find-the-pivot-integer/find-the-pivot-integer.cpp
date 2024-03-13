class Solution {
public:
    int pivotInteger(int n) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        int suf_sum = 0;
        while(n) {
            int pref_sum = (n * (n + 1)) / 2;
            suf_sum += n;
            if(pref_sum == suf_sum) return n;
            n--;
        }
        return -1;
    }
};