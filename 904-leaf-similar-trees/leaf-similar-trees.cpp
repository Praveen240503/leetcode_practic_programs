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
    void leafs(TreeNode *root, vector<int>&tr){
        if(root==NULL)return;
        if(root->left==NULL and root->right==NULL)tr.push_back(root->val);
        leafs(root->left,tr);
        leafs(root->right,tr);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL and root2==NULL)return true;
        if((root1==NULL and root2!=NULL) or (root1!=NULL and root2==NULL))return false;
        vector<int>tr1;
        vector<int>tr2;
        leafs(root1,tr1);
        leafs(root2,tr2);
        for(auto it:tr1)cout<<it<<" ";
        cout<<"\n";
        for(auto it:tr2)cout<<it<<" ";
        if(tr1==tr2)return true;
        return false;

    }
};