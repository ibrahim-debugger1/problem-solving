int maxProfit(vector<int>& prices) {
       int n=prices.size(),sol=0;
       int dp[n];
       memset(dp,0,sizeof dp);
       for(int i=n-2;i>=0;i--){
           dp[i]=max(0,(prices[i+1]-prices[i])+dp[i+1]);
       }
       for(int i=0;i<n;i++){
           sol=max(sol,dp[i]);
       }
        return sol;
    }