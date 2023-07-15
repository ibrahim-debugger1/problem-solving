int leftHieght(TreeNode* root) {
    if (root == NULL)
        return 0;
    return 1 + leftHieght(root->left);
}
int rightHieght(TreeNode* root) {
    if (root == NULL)
        return 0;
    return 1 + rightHieght(root->right);
}
int countNodes(TreeNode* root) {
    if (root == NULL)
        return 0;
    int lh = leftHieght(root);
    int rh = rightHieght(root);
    if (lh == rh)
        return pow(2, lh) - 1;
    return countNodes(root->left) + countNodes(root->right) + 1;
}