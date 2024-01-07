class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int d=1;
        for(int i=1;i<derived.size();i++){
            d^=derived[i-1];
        }
        return 1^d==derived[derived.size()-1];
    }
};