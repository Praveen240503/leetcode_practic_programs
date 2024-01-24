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
    void dfs(TreeNode *node,map<int,int>&mp,int &ans){
        if(node==NULL)return;

        mp[node->val]++;

        if(node->left==NULL and node->right==NULL){
            int c=0;
            for(auto it:mp){
                if(it.second%2!=0)c++;
            }
            if(c<=1)ans++;
        }
        

        dfs(node->left,mp,ans);
        dfs(node->right,mp,ans);
        mp[node->val]--;
        
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        map<int,int>mp;
        int n=0;
        dfs(root,mp,n);
        return n;
    }
};