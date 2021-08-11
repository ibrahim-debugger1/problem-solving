void nextPermutation(vector<int>& nums) {
        bool flag=true;
        int i=nums.size()-1;
        for(;i>0;i--){
            if(nums[i]>nums[i-1]){
                i--;
                flag=false;
                break;
            }
        }
        if(flag){
            sort(nums.begin(),nums.end());
            return ;
        }
        int mi=INT_MAX,ind=nums.size()-1;
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]-nums[i]<=mi && nums[j]>nums[i]){
                mi=nums[j]-nums[i];
                ind=j;
        }
        }
        swap(nums[i],nums[ind]);
        cout<<i<<"      "<<ind<<endl;
        int s1=i+1,s2=nums.size();
        reverse(nums.begin() + s1, nums.begin() + s2);
    }