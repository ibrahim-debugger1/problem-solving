vector<vector<int>>ve;
    vector<vector<int>> combine(int n, int k) {
        backTrack(n,k,1,{});
        return ve;
    }
    void backTrack(int n,int k,int lev,vector<int>temp){
        if(temp.size()==k){
            ve.push_back(temp);
            return ;
        }if(lev==n+1 || temp.size()>k){
            return;
        }
        for(int i=lev;i<=n;i++){
            temp.push_back(i);
            backTrack(n,k,i+1,temp);
            temp.pop_back();
        }
    }