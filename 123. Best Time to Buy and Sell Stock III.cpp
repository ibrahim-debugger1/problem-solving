int dp[100008], dp1[100005];
int maxProfit(vector < int > & prices) {
   int n = prices.size();
   for (int i = n - 2; i >= 0; i--) {
      dp[i] = max(0, (prices[i + 1] - prices[i]) + dp[i + 1]);
   }
   for (int i = 1; i < n; i++) {
      dp1[i] = max(0, (prices[i] - prices[i - 1]) + dp1[i - 1]);
   }
   int ma = 0;
   for (int i = n - 1; i >= 0; i--) {
      ma = max(ma, dp[i]);
      dp[i] = ma;
   }
   ma = 0;
   for (int i = 0; i < n; i++) {
      ma = max(ma, dp1[i]);
      dp1[i] = ma;
   }
   int sol = 0;
   for (int i = 0; i < n - 1; i++) {
      sol = max(sol, (dp1[i] + dp[i + 1]));
   }
   sol = max(sol, dp1[n - 1]);
   return sol;
}