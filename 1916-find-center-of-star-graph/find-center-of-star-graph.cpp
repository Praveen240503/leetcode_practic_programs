auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return'c';
}();
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        // if(edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]){
        //     return edges[0][0];
        // }

        return edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1] ? edges[0][0] : edges[0][1];
        
    }
};