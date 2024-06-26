class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>tr;
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j < matrix[0].size() ; j++){
                if(matrix[i][j] == 0)tr.push_back({i,j});
            }
        }
        for(auto it:tr){
            int a = it.first;
            int b = it.second;
            
            for(int i = 0 ; i < matrix.size() ; i++){
                matrix[i][b] = 0;
            }
            
            for(int j = 0 ; j < matrix[0].size() ; j++){
                matrix[a][j] = 0;
            }
        }
    }
};