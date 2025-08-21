class Solution {
public:
    void swapping(char &n, char &m){
        char temp = n;
        n=m;
        m=temp;
    }
    void function(int i, vector<char>&s){
        if(i>=s.size() / 2)return;
        swapping(s[i], s[s.size() - i - 1]);
        function(i+1, s);
    }
    void reverseString(vector<char>& s) {
        function(0, s);
    }
};