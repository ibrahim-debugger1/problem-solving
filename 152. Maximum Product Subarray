int left_dp[20005],right_dp[20005];
    int maxProduct(vector<int>& nums) {
        left_dp[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            if(left_dp[i-1]==0){
                left_dp[i]=nums[i];
                continue;
            }
            left_dp[i]=nums[i]*left_dp[i-1];
        }
        right_dp[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            if(right_dp[i+1]==0){
                right_dp[i]=nums[i];
                continue;
            }
            right_dp[i]=nums[i]*right_dp[i+1];
        }
        int sol=INT_MIN;
        sol=max(right_dp[0],max(right_dp[nums.size()-1],max(left_dp[0],left_dp[nums.size()-1])));
        for(int i=0;i<nums.size();i++){
            sol=max(sol,max(left_dp[i],right_dp[i]));
        }
        return sol;
    }
