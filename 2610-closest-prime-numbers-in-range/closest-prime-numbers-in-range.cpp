int n=1e6+1;
vector<int>tr(n,1);
void sieve(){
    tr[0]=0;
    tr[1]=0;
    for(int i=2;i*i<=n;i++){
        if(tr[i]==1){
            for(int j=i*i;j<n;j+=i){
                tr[j]=0;
            }
        }
    }
}
class Solution {
public:
    vector<int> closestPrimes(int l, int r) {
        sieve();
        vector<int>pr;
        for(int i=l;i<=r;i++){
            if(tr[i]==1)pr.push_back(i);
        }
        // for(auto it:pr)cout<<it<<" ";
        if(pr.size()<2)return {-1,-1};
        int mini=INT_MAX,a=0,b=0;
        for(int i=1;i<pr.size();i++){
            int diff=pr[i]-pr[i-1];
            if(diff<mini){
                mini=diff;
                a=pr[i-1];
                b=pr[i];
            }
        }
        
        return {a,b};
    }
};