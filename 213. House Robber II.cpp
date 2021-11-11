 int dp[105];
 int dp1[105];
    int rob(vectorint& nums) {
        if(nums.size()==1){
            return nums[0];
        }else if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        dp[0]=nums[0];
        for(int i=1;inums.size()-1;i++){
            if(i==1){
                dp[1]=max(dp[i-1],nums[1]);
            }else{
                dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
            }
        }
        dp1[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i0;i--){
            if(i==nums.size()-2){
                dp1[i]=max(nums[i],nums[i+1]);
            }else{
                dp1[i]=max(nums[i]+dp1[i+2],dp1[i+1]);
            }
        }
        return max(dp1[1],dp[nums.size()-2]);
    }