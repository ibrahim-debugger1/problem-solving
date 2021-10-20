 int dp[22];
    int numTrees(int n) {
        dp[0]=1;dp[1]=1;dp[2]=2;
        for(int i=3;i<=n;i++){
            hey(i);
        }
        return dp[n];
    }
    void hey(int n){
        for(int i=1;i<=n;i++){
            dp[n]+=(dp[n-i]*dp[i-1]);
        }
        //cout<<dp[n]<<endl;
    }