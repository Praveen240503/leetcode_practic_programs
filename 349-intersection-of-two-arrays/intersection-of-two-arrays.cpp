class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        cout.tie(nullptr);
        vector<int> ans;
        unordered_set<int>one, two;
        for(int i = 0; i < nums1.size(); i++) {
            one.insert(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++) {
            if(one.find(nums2[i]) != one.end()) {
                two.insert(nums2[i]);
            }
        }
        for(auto it:two){
            ans.push_back(it);

        }
        return ans;
    }
};