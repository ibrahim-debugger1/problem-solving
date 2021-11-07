 int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle[(triangle.size()-1)].size()+4;
        int dp[n][n];
        memset(dp,0,sizeof dp);
        dp[0][0]=triangle[0][0];
        for(int i=1;i<n-4;i++){
            for(int j=0;j<triangle[i].size();j++){
                if(j==0){
                    dp[i][j]=triangle[i][j]+dp[i-1][j];
                }else if(j==triangle[i].size()-1){
                    dp[i][j]=triangle[i][j]+dp[i-1][j-1];
                }else{
                    dp[i][j]=min((triangle[i][j]+dp[i-1][j]),(triangle[i][j]+dp[i-1][j-1]));
                }
            }
        }
        int sol=INT_MAX;
        for(int i=0;i<n-4;i++){
            sol=min(sol,dp[triangle.size()-1][i]);
        }
        return sol;
    }