vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>arr(nums.size());
        for(int i=0;i<arr.size();i++)
            arr[i]=1; 
        int n=nums.size();
        for(int i=1;i<n;i++){
            arr[i]=nums[i-1]*arr[i-1];
        }
        int post=nums[n-1];
        for(int i=n-2;i>=0;i--){
            arr[i]=post*arr[i];
            post*=nums[i];
        }
        return arr;
    }