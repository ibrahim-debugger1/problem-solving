 int uniquePaths(int m, int n) {
        int dp[m][n];
        memset(dp,0,sizeof dp);
        dp[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(j!=n-1){
                    dp[i][j+1]+=dp[i][j];
                }if(i!=m-1){
                    dp[i+1][j]+=dp[i][j];
                }
            }
        }
        return dp[m-1][n-1];
    }