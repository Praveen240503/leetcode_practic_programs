class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>tr(A.size(),0);
        long long ma=0,mb=0;
        for(int i=0;i<A.size();++i){
            ma|=(1LL<<A[i]);
            mb|=(1LL<<B[i]);
            // cout<<ma<<" "<<mb;
            tr[i]=__builtin_popcountll(ma&mb);
        }
        return tr;
    }
};