class Solution {
public:
    string removeKdigits(string s, int k) {
        string ans="";
        stack<int>st;
        for(int i=0;i<s.size();i++){
            while(!st.empty() and k>0 and (s[i]-'0' < st.top()) ){
                st.pop();
                k--;
            }
            if(s[i]-'0'!=0 || !st.empty()){
                st.push(s[i]-'0');
            }
        }
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        while(!st.empty()){
            ans+=st.top()+'0';
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        if(ans=="")return "0";
        return ans;
    }
};