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
    void function(TreeNode *node,int maxi,int mini,int &ans){
        if(node==NULL)return;
        if(mini!=INT_MAX)ans=max(ans,abs(node->val-mini));
        if(maxi!=INT_MIN)ans=max(ans,abs(node->val-maxi));
        mini=min(mini,node->val);
        maxi=max(maxi,node->val);
        function(node->left,maxi,mini,ans);
        function(node->right,maxi,mini,ans);
    }
    int maxAncestorDiff(TreeNode* root) {
        int mini=INT_MAX,maxi=INT_MIN;
        int ans=0;
        function(root,maxi,mini,ans);
        return ans;
    }
};