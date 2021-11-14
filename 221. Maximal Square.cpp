 int dp[308][308];
    int maximalSquare(vector<vector<char>>& matrix) {
        int row=matrix.size(),col=matrix[0].size();
        bool flag=false;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]=='1')
                    flag=true;
            }
        }
        for(int i=0;i<col;i++){
            dp[row-1][i]=(matrix[row-1][i]-48);
        }
        for(int i=0;i<row;i++){
            dp[i][col-1]=(matrix[i][col-1]-48);
        }
        for(int i=row-2;i>=0;i--){
            for(int j=col-2;j>=0;j--){
                int ma=max(dp[i][j+1],max(dp[i+1][j],dp[i+1][j+1]));
                int mi=min(dp[i][j+1],min(dp[i+1][j],dp[i+1][j+1]));
                if((matrix[i][j]-48)==0){
                    dp[i][j]=0;
                }else{
                    if((matrix[i][j+1]-48)==1 && (matrix[i+1][j]-48)==1 && (matrix[i+1][j+1]-48)==1){
                       dp[i][j]=mi+1;
                    }else{
                        if(matrix[i][j]=='0')
                            dp[i][j]=0;
                        else
                            dp[i][j]=1;
                    }
                }
            }
        }
        int sol=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                sol=max(sol,dp[i][j]);
            }
        }
        if(flag)
            return max(sol*sol,1);
        return sol*sol;
    }