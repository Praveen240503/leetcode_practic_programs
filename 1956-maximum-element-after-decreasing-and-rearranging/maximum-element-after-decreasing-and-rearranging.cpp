class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        if(arr[0]!=1)arr[0]=1;
        int c=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>=c+1)
            c+=1;
        }
        return c;
    }
};