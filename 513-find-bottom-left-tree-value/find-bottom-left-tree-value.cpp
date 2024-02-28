/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void bfs(TreeNode *root,vector<vector<int>>&ve,int l){
            if(root==NULL)return;
            if(l==ve.size())ve.push_back({root->val});
            else ve[l].push_back(root->val);
            bfs(root->left,ve,l+1);
            bfs(root->right,ve,l+1);
        }
    int findBottomLeftValue(TreeNode* root) {
        vector<vector<int>> vec;
        bfs(root, vec, 0);
        // for(auto it: vec){
        //     for(auto i:it)cout<<i<<" ";
        //     cout<<"\n";
        // }
        int n= vec.size();


        
        return vec[n-1][0];
    }
};