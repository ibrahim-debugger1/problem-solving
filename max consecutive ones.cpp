    int longestOnes(vector<int>& nums, int k) {
        /*
        after entire day of thinking and trying to make a simple solution i write this ... so good 
            Given a binary array nums and an integer k, return the maximum number of consecutive 
            1's in the array if you can flip at most k 0's.
        */
        int a=nums.size();
        int l=0,r=0,sol=0;
        while(l<a && r<a){
         	if(nums[r]==0){
                k--;
            }
            while(k<0){
                if(nums[l]==0)
                    k++;
                l++;
            }
            sol=max(sol,r-l+1);
            r++;
        }
        return sol;
    }