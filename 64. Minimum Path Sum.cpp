 int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int dp[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dp[i][j]=INT_MAX;
            }
        }
        dp[0][0]=grid[0][0];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j!=m-1){
                    dp[i][j+1]=min(dp[i][j+1],dp[i][j]+grid[i][j+1]);
                }if(i!=n-1){
                    dp[i+1][j]=min(dp[i+1][j],dp[i][j]+grid[i+1][j]);
                }
            }
        }
        return dp[n-1][m-1];
    }