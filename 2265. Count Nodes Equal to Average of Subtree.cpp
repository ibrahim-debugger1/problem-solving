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
    int sol=0;
    pair<int, int> rec(TreeNode* root){
        if(root==NULL)
            return  make_pair(0, 0);
        pair<int, int> temp1,temp2;
        temp1=rec(root->left);
        temp2=rec(root->right);
        int sum=temp1.first+temp2.first+root->val;
        int count=temp1.second+temp2.second+1;
       // cout<<sum<<" "<<count<<endl;
        if(sum/count==root->val)
            sol++;
        return make_pair(sum,count);

    }
    int averageOfSubtree(TreeNode* root) {
        rec(root);
        return sol;
    }
};
