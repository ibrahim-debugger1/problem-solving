    //that was the hardest dp problem i solved 
    map<pair<int,bool>,int>dp;
    int maxProfit(vector<int>& prices) {
        int sol=hey(prices,prices.size(),0,true);
        return sol;
    }
    int hey(vector<int>prices,int n,int ind,bool buying){
        if(ind>=n)
            return 0;
        if(dp[{ind,buying}])
            return dp[{ind,buying}];
        if(buying){
            int buy=hey(prices,n,ind+1,false)-prices[ind];
            int cooldown=hey(prices,n,ind+1,true);
            dp[{ind,buying}]=max(buy,cooldown);
        }else{
            int sell=hey(prices,n,ind+2,true)+prices[ind];
            int cooldown=hey(prices,n,ind+1,false);
            dp[{ind,buying}]=max(sell,cooldown);
        }
        return dp[{ind,buying}];
    }