class Solution {
public:
    
    void pre_order(TreeNode* root){
       if(root==NULL)
            return ;
        if(root->left!=NULL){
            TreeNode* temp=root->right;
            root->right=root->left;
            root->left=NULL;
            TreeNode* t=root->right;
            while(t->right!=NULL)
                t=t->right;
            t->right=temp;
        }
        pre_order(root->right);
    }
    void flatten(TreeNode* root) {
        pre_order(root);
    }
};