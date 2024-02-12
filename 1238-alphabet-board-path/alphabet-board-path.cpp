class Solution {
public:
    string alphabetBoardPath(string tar) {
    vector<string>tr={"abcde","fghij","klmno","pqrst","uvwxy","z"};
    map<char,pair<int,int>>mp;
    for(int i=0;i<tr.size();i++) {
        for(int j=0;j<tr[i].size();j++) {
            mp[tr[i][j]]={i,j};
        }
    }
    string ans="";
    pair<int,int>r = {0,0};
    for(char c : tar) {
        pair<int,int> ref = mp[c];
        int posx = ref.first - r.first;
        int posy = ref.second - r.second;
        while(posx<0) { 
            ans+="U"; 
            posx++; 
        }
        while(posy<0) { 
            ans+="L"; 
            posy++; 
        }
        while(posx>0) { 
            ans+="D"; 
            posx--; 
        }
        while(posy>0) { 
            ans+="R"; 
            posy--; 
        }
        ans+="!";
        r=ref;
    }
    return ans;
}
};
// DDR!UURRR!!DDD!
// DDR!UURRR!!DDD!