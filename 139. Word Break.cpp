    //so hard to understand the solution (not to creat it) 
	bool dp[302];
    bool wordBreak(string s, vector<string>& wordDict) {
        for(int i=0;i<s.size();i++){
            for(int j=0;j<=i;j++){
                string temp=s.substr(j,i+1-j);
                if(find(wordDict.begin(),wordDict.end(),temp)!=wordDict.end() && (j==0 || dp[j-1])){
                    dp[i]=true;
                    break;
                }
            }
        }
        for(int i=0;i<s.size();i++)
            cout<<dp[i]<<"  ";
        return dp[s.size()-1];
    }