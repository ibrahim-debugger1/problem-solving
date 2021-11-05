int numDecodings(string s) {
        int dp[s.size()+4];
        memset(dp,0,sizeof dp);
        dp[0]=1;
        if(s[0]=='0')
            dp[1]=0;
        else
            dp[1]=1;
        for(int i=2;i<=s.size();i++){
            int oneDigit=s[i-1]-48;
            int twoDigit=(s[i-2]-48)*10+(oneDigit);
            if(oneDigit>=1)
                dp[i]+=dp[i-1];
            if(twoDigit>=10 && twoDigit<=26)
                dp[i]+=dp[i-2];
        }
        return dp[s.size()];
    }