 int dp[104];
    int rob(vector<int>& nums) {
        dp[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            if(i==1){
                dp[1]=max(dp[0],nums[1]);
            }else{
                dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
            }
        }
        return dp[nums.size()-1];
    }