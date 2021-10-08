vector<int>v[2000];
    vector<vector<int>> levelOrder(TreeNode* root) {
        dumb(root,0);
        vector<vector<int>>sol;
        for(int i=0;i<2000;i++){
            if(!v[i].empty()){
                sol.push_back(v[i]);
            }
        }
        return sol;
    }
    void dumb(TreeNode* root,int level){
        if(root==NULL)
            return ;
        v[level].push_back(root->val);
        dumb(root->left,level+1);
        dumb(root->right,level+1);
    }