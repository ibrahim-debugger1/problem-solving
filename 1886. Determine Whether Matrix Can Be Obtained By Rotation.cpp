//easy but i think my implementation is not that good 
bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        bool flag=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]!=target[i][j]){
                    flag=true;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag==false)
            return true;
        flag=false;
        for(int i=0,jj=n-1;i<n;i++,jj--){
            for(int j=0,ii=0;j<n;j++,ii++){
                if(mat[i][j]!=target[ii][jj]){
                    flag=true;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag==false)
            return true;
        flag=false;
        for(int i=0,ii=n-1;i<n;i++,ii--){
            for(int j=0,jj=n-1;j<n;j++,jj--){
                if(mat[i][j]!=target[ii][jj]){
                    flag=true;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag==false)
            return true;
        flag=false;
        for(int i=0,jj=0;i<n;i++,jj++){
            for(int j=0,ii=n-1;j<n;j++,ii--){
                if(mat[i][j]!=target[ii][jj]){
                    flag=true;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag==false)
            return true;
        return false;
    }