class Solution {
public:
    bool dfs(int i, int j, int n, int m, vector<vector<char>>& board, 
            vector<vector<int>>&vis, int k, string &word) {
        if (k == word.size()) return true;
        if (i == n || i < 0 || j < 0 || j == m || vis[i][j]==1 || board[i][j] != word[k]) {
            return false; 
        }
        vis[i][j]=1;
        bool call1 = dfs(i + 1, j, n, m, board, vis, k + 1, word);
        bool call2 = dfs(i - 1, j, n, m, board, vis, k + 1, word);
        bool call3 = dfs(i, j + 1, n, m, board, vis, k + 1, word);
        bool call4 = dfs(i, j - 1, n, m, board, vis, k + 1, word);
        vis[i][j]=0;
        return call1 || call2 || call3 || call4;
    }

    bool exist(vector<vector<char>>& board, string word) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n = board.size();
        int m = board[0].size();
        int k = word.size(); 
       // bool c=false; 
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                vector<vector<int>>vis(n,vector<int>(m,0));
                if (board[i][j]==word[0]) {
                    if(dfs(i,j,n,m,board,vis,0,word)) return true;
                }
            }
        }

        return false;
    }
};