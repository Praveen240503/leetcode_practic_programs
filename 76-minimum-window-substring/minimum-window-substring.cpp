class Solution {
public:
  string minWindow(string s, string t) {
    unordered_map<char,int>mp1;
    for(char c:t){
      mp1[c]++;
    }
    int i=0,j=0,size1=t.size(),size2=s.size()+1,start=0;
    while(j<s.size()){
      if(mp1[s[j]]>0){
        size1--;
      }
      mp1[s[j]]--;
      while(size1==0){
        if(size2>j-i+1){
          size2=j-i+1;
          start=i;
        }
        mp1[s[i]]++;
        if(mp1[s[i]]>0){ 
          size1++;
        }
        i++;
      }
      j++;
    }
    if(size2==s.size()+1)return "";
    return s.substr(start,size2);
  }
};