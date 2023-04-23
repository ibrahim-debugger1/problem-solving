class Solution {
public:
    vector<int>squareNumbers;
    int dp[10201] = {INT_MAX};
    int rec(int n) {
        if (n == 0)
            return 0;
        if (dp[n] != INT_MAX)
            return dp[n];
        for (int i = 1; i < 103; i++) {
            if ((n - squareNumbers[i]) >= 0) {
                dp[n] = min(dp[n], rec(n - squareNumbers[i]) + 1);
            }
        }
        return dp[n];
    }
    int numSquares(int n) {
        squareNumbers.push_back(0);
        for (int i = 1; i < 106; i++)
            squareNumbers.push_back(i * i);
        for (int i = 1; i < 10201; i++)
            dp[i] = (INT_MAX);
        return rec(n);
    }

};