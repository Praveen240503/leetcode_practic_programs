class Solution {
public:
    long long flowerGame(int n, int m) {
        long long res = 0;
        res+= ((long long)n/2)*(m-m/2);
        res += ((long long)m/2)*(n-n/2);
        return res;
    }
};