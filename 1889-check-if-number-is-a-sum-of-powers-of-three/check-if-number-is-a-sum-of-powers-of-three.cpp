class Solution {
public:
    bool checkPowersOfThree(int n) {
        ios_base::sync_with_stdio;
        cin.tie(NULL);
        cout.tie(NULL);
        int near_power = 1;
        while(near_power <= n){
            near_power*=3;
        }
        // cout<<near_power;
        while(n>0 and near_power>0){
            if(near_power <= n){
                n-=near_power;
            }
            near_power/=3;
        }
        return n==0;
    }
};