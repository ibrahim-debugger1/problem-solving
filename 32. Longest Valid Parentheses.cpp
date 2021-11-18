int dp[40004];
    int longestValidParentheses(string s) {
        for(int i=1;i<s.size();i++){
            if(s[i]==')' && s[i-1]=='('){
                if(i-2>=0)
                    dp[i]=dp[i-2]+2;
                else
                    dp[i]+=2;
            }
            else if(s[i]==')' && s[i-1]==')'){
                if(i-dp[i-1]-1>=0 && s[i-dp[i-1]-1]=='('){
                        if(i-dp[i-1]-2>=0)
                              dp[i]=dp[i-1]+2+dp[i-dp[i-1]-2];
                         else
                               dp[i]=dp[i-1]+2;
                }
            }
        }
        int sol=0;
        for(int i=0;i<s.size();i++){
            sol=max(sol,dp[i]);
        }
        return sol;
    }