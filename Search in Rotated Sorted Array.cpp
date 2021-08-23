//https://leetcode.com/problems/search-in-rotated-sorted-array/
//that is a great question i tried my best to solve it but i can't do it therefor i took the idea from youtube not the code just the idea hehehehehehe
int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<r){
            int mid=(r+l)/2;
            if(nums[mid]>nums[r])
                l=mid+1;
            else
                r=mid;
        }
        int pivot=r;
        l=0;
        while(l<=r){
            int mid=(r+l)/2;
            if(nums[mid]>target)
                r=mid-1;
            else if(nums[mid]<target)
                l=mid+1;
            else 
                return mid;
        }
        l=pivot;r=nums.size()-1;
        while(l<=r){
            int mid=(r+l)/2;
            if(nums[mid]>target)
                r=mid-1;
            else if(nums[mid]<target)
                l=mid+1;
            else 
                return mid;
        }
        return -1;
    }
