int n1 = 0, n2 = 0, temp = INT_MIN;
bool test = false;
void rec(TreeNode* root) {
    if (root == NULL)
        return ;
    rec(root->left);
    if (root->val < temp) {
        if (!test)
            n1 = temp;
        n2 = root->val;
        test = true;
    }
    temp = root->val;
    rec(root->right);
}
void rec1(TreeNode* root) {
    if (root == NULL)
        return ;
    if (root->val == n1 || root->val == n2) {
        if (root->val == n1)
            root->val = n2;
        else
            root->val = n1;
    }
    rec1(root->left);
    rec1(root->right);
}
void recoverTree(TreeNode* root) {
    rec(root);
    rec1(root);
}