/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   TreeNode* rec(TreeNode* root, TreeNode* p, TreeNode* q){
       if(root==NULL)
            return NULL;
        if(root==p || root==q)
            return root;
        TreeNode* l=rec(root->left,p,q);
        TreeNode* r=rec(root->right,p,q);
        if(l!=NULL && r!=NULL)
            return root;
        if(l==NULL)
            return r;
        if(r==NULL)
            return l;
        return NULL;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
     return rec(root,p,q);

    }
};