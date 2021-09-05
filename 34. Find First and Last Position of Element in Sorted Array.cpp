 
vector<int> searchRange(vector<int>& nums, int target) {
        int ind=-1,l=0,r=nums.size()-1,s1=0,s2=0;
        while(l<=r){
            int mid=(r+l)/2;
            if(nums[mid]>target)
                r=mid-1;
            else if(nums[mid]<target)
                l=mid+1;
            else {
                ind=mid;
                 break;
        }
        }
        if(ind==-1)
            return {-1,-1};
        l=0;r=ind;
        int save=0;
        while(l<=r){
            int mid=(r+l)/2;
            if(nums[mid]==target){
                save=mid;
                r=mid-1;
            }
            else if(nums[mid]<target)
                l=mid+1;
        }
        s1=save;l=ind;r=nums.size()-1;
        while(l<=r){
            int mid=(r+l)/2;
            if(nums[mid]==target){
                save=mid;
                l=mid+1;
            }
            else if(nums[mid]>target)
                r=mid-1;
        }
        s2=save;
        return {s1,s2};
    }