class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>result;

        for(int j = 0; j < arr2.size(); j++){
            for(int i = 0; i < arr1.size(); i++){
                if(arr1[i] == arr2[j]){
                    result.push_back(arr1[i]);
                    arr1[i] = -1;
                }
            }
        }
        // for(auto it:arr1)cout<<it<<" ";
        sort(arr1.begin(), arr1.end());
        for(int i = 0; i < arr1.size(); i++){
            if(arr1[i] != -1)result.push_back(arr1[i]);
        }
        return result;
    }
};