vector<vector<int>>sol;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        backTrack(nums,{},0);
        return sol;
    }
    void backTrack(vector<int>nums,vector<int>temp,int ind){
        sol.push_back(temp);  
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1])
                continue;
            temp.push_back(nums[i]);
            backTrack(nums,temp,i+1);
            temp.pop_back();
        }
    }