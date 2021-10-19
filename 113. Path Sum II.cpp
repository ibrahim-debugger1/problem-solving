vector<vector<int>>sol;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        backTrack(root,targetSum,0,{});
        return sol;
    }
    void backTrack(TreeNode* root,int targetSum,int currentSum,vector<int>temp){
        if(root==NULL){
            return ;
        }if(root->left==NULL && root->right==NULL){
            currentSum+=root->val;
            temp.push_back(root->val);
            if(currentSum==targetSum){
                sol.push_back(temp);
            }
            return ;
        }
        currentSum+=root->val;
        temp.push_back(root->val);
        backTrack(root->left,targetSum,currentSum,temp);
        backTrack(root->right,targetSum,currentSum,temp);
        temp.pop_back();
        currentSum-=root->val;
    }