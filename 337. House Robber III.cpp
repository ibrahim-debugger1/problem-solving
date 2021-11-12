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
    int rob(TreeNode* root) {
        pair<int,int> sol=dp(root);
        return max(sol.first,sol.second);
    }
    pair<int,int> dp(TreeNode* root){
        if(root==NULL)
            return {0,0};
        if(root->left==NULL && root->right==NULL)
            return {root->val,0};
        pair<int,int>left=dp(root->left);
        pair<int,int>right=dp(root->right);
        return std::make_pair((root->val+left.second+right.second),(max(left.first,left.second)+max(right.first,right.second)));
    }
};