class Solution {
public:
    void func(int i, int j, string &digits , char *ans, vector<string>&tr, char keypad[][10]){
        if(digits[i]=='\0'){
            ans[j]='\0';
            if(ans[0]!='\0')tr.push_back(ans);
            return;
        }
        int digit=digits[i]-'0';
        if(digit==0 || digit==1){
            func(i+1, j , digits, ans, tr, keypad);
        }

        for(int k=0;keypad[digit][k]!='\0';k++){
            ans[j]=keypad[digit][k];
            func(i+1, j+1, digits, ans , tr, keypad);
        }
    }

    vector<string> letterCombinations(string digits) {
        char keypad[][10]={"","", "abc", "def","ghi", "jkl","mno","pqrs","tuv","wxyz"};

        vector<string>tr;
        char ans[100];
        func(0,0,digits, ans,tr, keypad );
        return tr;
    }
};