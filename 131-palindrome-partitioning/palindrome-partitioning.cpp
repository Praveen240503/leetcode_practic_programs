class Solution {
public:
    void palin(int i,int n,string &s, vector<string>&temp,vector<vector<string>>&tr){
        if(i==n){
            tr.push_back(temp);
            return;
        }
        for(int k=i;k<n;k++){
            string str=s.substr(i,k-i+1);
            if(str==string(str.rbegin(), str.rend())){
                temp.push_back(str);
                palin(k+1,n,s,temp, tr);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>tr;
        vector<string>temp;
        int n=s.size();
        palin(0,n,s,temp,tr);
        return tr;
    }
};