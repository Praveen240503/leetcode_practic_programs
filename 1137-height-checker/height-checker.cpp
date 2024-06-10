class Solution {
public:
    int heightChecker(vector<int>& heights) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int>expected = heights;
        sort(expected.begin(), expected.end());
        int count = 0;
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != expected[i])count++;
        }
        // for(auto it:expected)cout<<it<<" ";
        return count;
    }
};