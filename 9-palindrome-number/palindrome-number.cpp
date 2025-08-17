class Solution {
public:
    bool isPalindrome( int x) {
        long revnum=0;
         int  tr=x;
        if(tr<0) return false;
        if(tr<10)return true;
        while(tr){
            int tem=tr%10;
            revnum=revnum*10+tem;
            tr=tr/10;
        }
        if(revnum==x)return true;
        return false;
        
    }
};