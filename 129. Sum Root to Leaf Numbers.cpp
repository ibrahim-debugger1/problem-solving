class Solution {
public:
    long long sol = 0;
    void fun(TreeNode* root, long long temp) {
        if (root == NULL) {
            return ;
        } if (root->left == NULL && root->right == NULL) {
            sol += (temp * 10 + root->val);
            return;
        }
        fun(root->left, (temp * 10) + root->val);
        fun(root->right, (temp * 10) + root->val);

    }
    int sumNumbers(TreeNode* root) {
        fun(root->left, root->val);
        fun(root->right, root->val);
        if (root->right == NULL && root->left == NULL)
            sol += root->val;
        return sol;
    }
};