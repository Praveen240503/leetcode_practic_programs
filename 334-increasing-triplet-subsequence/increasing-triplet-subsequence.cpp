class Solution {
public:
    bool increasingTriplet(std::vector<int>& tr) {
        if (tr.size() < 3) {
            return false;
        }
        int a = INT_MAX;
        int b = INT_MAX;

        for (auto it : tr) {
            if (it <= a) {
                a = it;
            } 
            else if (it <= b) {
                b = it;
            } 
            else {
                return 1;
            }
        }

        return 0;
    }
};