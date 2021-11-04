 int dp[100005];
    vector<int> countBits(int n) {
        dp[0]=0;dp[1]=1;dp[2]=1;
        int mod=2;
        for(int i=2;i<=n;i*=2){
            dp[i]=1;
        }
        for(int i=3;i<=n;i++){
            if(dp[i]==1){
                mod=i;
                continue;
            }
            dp[i]=dp[mod]+dp[i-mod];
        }
        vector<int>sol;
        for(int i=0;i<=n;i++)
            sol.push_back(dp[i]);
        return sol;
    }