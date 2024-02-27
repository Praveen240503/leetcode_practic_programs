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
int d=0;
     int height(TreeNode *node){
         if(node==NULL)return 0;
         int lh=height(node->left);
         int rh=height(node->right);
          d=max(d,lh+rh+1);
         return max(lh,rh)+1;
     }
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return d-1;
    }
};