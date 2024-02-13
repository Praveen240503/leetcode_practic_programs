class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto it:words){
            string s=it;
            reverse(it.begin(),it.end());
            if(s==it){
                return it;
            }
        }
        return "";
    }
};