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
    //it's O(n*log(n)) but it's work 
    vector<int> temp;
    void rec(TreeNode* root){
        if(root==NULL)
            return ;
        rec(root->left);
        temp.push_back(root->val);
        rec(root->right);
    }
    int i=0;
    void rec1(TreeNode* root){
         if(root==NULL)
            return ;
        rec1(root->left);
        root->val=temp[i++];
        rec1(root->right);
    }
    void recoverTree(TreeNode* root) {
        rec(root);
        sort(temp.begin(),temp.end());
        rec1(root);
    }
};