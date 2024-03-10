class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        unordered_map<int,int> mp;
        vector<int> tr;
        for(int i = 0; i < nums1.size(); i++)
        {
            mp[nums1[i]]++;
        }
        for(int i = 0;i < nums2.size(); i++)
        {
            if(mp.find(nums2[i]) != mp.end())
            {
                tr.push_back(nums2[i]);
                mp.erase(nums2[i]);
            }
        }
        return tr;
    }
};