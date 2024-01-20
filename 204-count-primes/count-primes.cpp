class Solution {
public:
    vector<int> sieve(int n){
        vector<int>tr(n+1,1);
        tr[0]=0;
        tr[1]=0;
        for(int i=2;i*i<n;i++){
            if(tr[i]==1){
                for(int j=i*i;j<=n;j+=i){
                    tr[j]=0;
                }
            }
        }
        //for(auto it:tr)cout<<it<<" ";
        return tr;
    }
    int countPrimes(int n) {
        vector<int>tr;
        tr=sieve(n+1);
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(tr[i]==1)c+=1;
        }
        return c;
        
    }
};