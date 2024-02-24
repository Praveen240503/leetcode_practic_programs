class Solution {
public:
    bool isPalindrome(long int x) {
        long s=0,v=0;
        long int  n=x;
        if(n<0) return false;
        while(n){
            s=n%10;
            v=v*10+s;
            n=n/10;
        }
        if(v==x){
            return true;
        }
        return false;
        
    }
};