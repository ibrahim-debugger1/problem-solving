vector<int>sol;
bool arr[13][13];
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size(),c=matrix[0].size();
        if(matrix.size()==1){
            return matrix[0];
        }
        dfs(matrix,0,0,0);
        return sol;
    }
    void dfs(vector<vector<int>>v,int r,int c,bool a){
            if(r==v.size() || c==v[0].size() || r==-1 || c==-1){
                return ;
            }if(arr[r][c]){
                return;
            }
            arr[r][c]=true;
            sol.push_back(v[r][c]);
            if(a==1){
                dfs(v,r-1,c,1);
                a=0;
            }
            dfs(v,r,c+1,0);dfs(v,r+1,c,0);dfs(v,r,c-1,0);dfs(v,r-1,c,1);
    }