class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int>v;
        for(auto it:mp){
            if(it.second>n/3)v.push_back(it.first);
        }
        return v;
    }
};