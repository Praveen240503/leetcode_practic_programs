class Solution {
public:
    int minMovesToSeat(vector<int>& se, vector<int>& su) {
        sort(se.begin(), se.end());
        sort(su.begin(), su.end());
        int c = 0;
        for(int i = 0; i < se.size(); i++){
            c+=abs(se[i] - su[i]);
        }
        return c;
    }
};