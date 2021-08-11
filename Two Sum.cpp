vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int>ma;
       for(int i=0;i<nums.size();i++){
           if(ma.count( target-nums[i] )==true){
               vector<int>sol;
               sol.push_back(i);
               sol.push_back(ma[target-nums[i]]);
               return sol;
           }else{
               ma[nums[i]]=i;
           }
       }
        return {};
    }