class Solution {
public:
    int mctFromLeafValues(vector<int>& A) {
    int res = 0,n=A.size();
    vector<int> tr= {INT_MAX};
    for (int i = 0;i<n; i++) {
        while (tr.back() <= A[i]) {
            int mid = tr.back();
            tr.pop_back();
            res += mid * min(tr.back(), A[i]);
        }
        tr.push_back(A[i]);
    }
    for (int i = 2; i < tr.size(); i++) {
        res += tr[i] * tr[i - 1];
    }
    return res;
    }
};