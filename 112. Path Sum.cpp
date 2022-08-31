bool flag = false;
bool hasPathSum(TreeNode* root, int targetSum) {
    if (root == NULL)
        return false;
    rec(root, 0, targetSum);
    return flag;
}
void rec(TreeNode* root, int sum, int target) {
    if (root == NULL) {
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        if (sum + root->val == target)
            flag = true;
        return ;
    }
    rec(root->left, sum + root->val, target);
    rec(root->right, sum + root->val, target);
    return ;
}