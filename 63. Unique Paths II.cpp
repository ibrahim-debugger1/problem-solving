int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        int dp[m][n];
        memset(dp,0,sizeof dp);
        if(obstacleGrid[0][0]==1)
            return 0;
        dp[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(j!=n-1){
                    if(obstacleGrid[i][j+1]!=1)
                        dp[i][j+1]+=dp[i][j];
                }if(i!=m-1){
                    if(obstacleGrid[i+1][j]!=1)
                        dp[i+1][j]+=dp[i][j];
                }
            }
        }
        return dp[m-1][n-1];
    }