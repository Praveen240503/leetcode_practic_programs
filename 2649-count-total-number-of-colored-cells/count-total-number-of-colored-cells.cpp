class Solution {
public:
    long long coloredCells(int n) {
        long long x = 1;
        for(int i = 2 ; i <= n ; i++){
            x += (4 * (i - 1));
        }
        return x;
    }
};