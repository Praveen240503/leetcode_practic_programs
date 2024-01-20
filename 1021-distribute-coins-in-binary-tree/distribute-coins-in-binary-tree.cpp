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
    int distribute(TreeNode *node,int &ans){
        if(!node)return 0;
        int l=distribute(node->left,ans);
        int m=distribute(node->right,ans);
        ans+=abs(l)+abs(m);
        return node->val-1+l+m;
    }
    int distributeCoins(TreeNode* root) {
        int ans=0;
        distribute(root,ans);
        return ans;
    }
};