vector<int>v1;
vector<int>v2;
bool isSymmetric(TreeNode* root) {
    rec1(root->left);
    rec2(root->right);
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i])
            return false;
    }

    return true;
}
void rec1(TreeNode* root) {
    if (root == NULL) {
        v1.push_back(-1000);
        return ;
    }
    v1.push_back(root->val);
    rec1(root->left);
    rec1(root->right);
}
void rec2(TreeNode* root) {
    if (root == NULL) {
        v2.push_back(-1000);
        return ;
    }
    v2.push_back(root->val);
    rec2(root->right);
    rec2(root->left);
}
