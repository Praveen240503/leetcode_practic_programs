class Solution {
public:
    int climbStairs(int n) {
        if(n==1)return 1;
        if(n==2)return 2;
        int arr[n];
        arr[0]=1;
        arr[1]=1;


        for(int i=2;i<n;i++){
            arr[i]=arr[i-1]+arr[i-2];

        }
        // for(auto it:arr)cout<<it<< " ";
        return arr[n-1]+arr[n-2];
    }
};