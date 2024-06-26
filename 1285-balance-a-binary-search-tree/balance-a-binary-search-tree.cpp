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
    TreeNode* func(int l, int h , vector<int>tr){
        if(l > h)return nullptr;
        int m = (l + h)/2;
        TreeNode * root = new TreeNode(tr[m]);
        root->left = func(l,m-1,tr);
        root->right = func(m+1, h, tr);
        return root;
    }
    void inorderlist(vector<int>&tr, TreeNode *root){
        if(!root)return;
        inorderlist(tr, root->left);
        tr.push_back(root->val);
        inorderlist(tr, root->right);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>tr;
        inorderlist(tr, root);
        // for(auto it:tr)cout<<it<<" ";
        return func(0, tr.size()-1,tr);
    }
};