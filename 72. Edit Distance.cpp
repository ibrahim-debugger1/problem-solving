 int dp[505][505];
    int minDistance(string word1, string word2) {
        if(word1.size()==0 || word2.size()==0){
            return max(word1.size(),word2.size());
        }
        for(int i=0,j=word1.size();i<word1.size();i++,j--){
            dp[i][word2.size()]=j;
        }
        dp[word1.size()][word2.size()]=0;
        for(int i=0,j=word2.size();i<word2.size();i++,j--){
            dp[word1.size()][i]=j;
        }
        for(int i=word1.size()-1;i>=0;i--){
            for(int j=word2.size()-1;j>=0;j--){
                if(word1[i]==word2[j])
                    dp[i][j]=dp[i+1][j+1];
                else{
                    dp[i][j]=min(dp[i+1][j],min(dp[i][j+1],dp[i+1][j+1]))+1;
                }
            }
        }
        for(int i=0;i<=word1.size();i++){
            for(int j=0;j<=word2.size();j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return dp[0][0];
    }
