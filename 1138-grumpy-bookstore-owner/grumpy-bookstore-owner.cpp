class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ans1 = 0;
        int ans2 = 0;
        int d = 0;
        
        for (int i = 0; i < customers.size(); ++i) {
            if (grumpy[i] == 0) {
                ans1 += customers[i];
            } else if (i < minutes) {
                d += customers[i];
            }
        }
        
        ans2 = d;
        
        for (int i = minutes; i < customers.size(); ++i) {
            d += customers[i] * grumpy[i];
            d -= customers[i - minutes] * grumpy[i - minutes];
            ans2 = max(ans2, d);
        }
        
        return ans1 + ans2;   
    }
};