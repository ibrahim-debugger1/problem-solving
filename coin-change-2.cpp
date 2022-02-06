//https://leetcode.com/problems/coin-change-2/


class Solution {
public:
    int dp[304][5005];
    int arr[303];
    int n;
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof dp);
        
        return rec(coins,amount,0);
    }
    int rec(vector<int>coins,int amount,int ind){
        if(amount==0)
            return 1;
        if(amount<0 || ind>=coins.size())
            return 0;
        if(dp[ind][amount]!=-1)
            return dp[ind][amount];
        dp[ind][amount]=(rec(coins,amount,ind+1)+rec(coins,amount-coins[ind],ind));
        return dp[ind][amount];
    }
};