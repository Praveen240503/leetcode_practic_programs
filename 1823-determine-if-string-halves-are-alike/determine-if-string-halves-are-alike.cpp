class Solution {
public:
    bool isVowel(char h){
        if(h=='a' || h=='e' || h=='i' || h=='o' || h=='u' || 
           h=='A' || h=='E' || h=='I' || h=='O' || h=='U' )
           return true;

        return false;
    }
    bool halvesAreAlike(string s) {
        int i=0;
        int j=s.size()-1;

        int lcount=0,rcount=0;
        while(i<j){
            if(isVowel(s[i]))lcount++;
            if(isVowel(s[j]))rcount++;
            i++;
            j--;
        }
        return lcount==rcount;
    }
};