class Solution {
public:
    bool palin(string s){
        int n=s.size()-1,i=0;
        while(i<n){
            if(s[i]!=s[n])return false;
            i++;
            n--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto it:words)
        {
            if(palin(it))return it;
        }
        return "";
    }

};