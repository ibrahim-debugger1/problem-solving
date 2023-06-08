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
    int count=0,res=0;
    void rec(TreeNode* root,int k){
        if(root==NULL)
            return ;
        rec(root->left,k);
        count++;
        if(count==k){
            res=root->val;
        }
        rec(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        rec(root,k);
        return res;
    }
};