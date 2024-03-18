class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<vector<int>> tr;
        int i = 0;

        while (i < intervals.size() && intervals[i][1] < newInterval[0]) {
            tr.push_back(intervals[i]);
            i++;
        }

        while (i < intervals.size() && intervals[i][0] <= newInterval[1]) {
            newInterval = {min(newInterval[0], intervals[i][0]), max(newInterval[1], intervals[i][1])};
            i++;
        }
        tr.push_back(newInterval);

        while (i < intervals.size()) {
            tr.push_back(intervals[i]);
            i++;
        }

        return tr;
    }
};