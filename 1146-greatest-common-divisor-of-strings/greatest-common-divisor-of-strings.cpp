class Solution {
public:
    int gcd(int n, int m){
        while(n>0 and m>0){
            if(n>m) n%=m;
            else m%=n;
        }
        if(n==0)return m;
        return n;
    }
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 != str2+str1)return "";
        int gcdlen = gcd(str1.size(), str2.size());
        return str1.substr(0, gcdlen);
    }
};