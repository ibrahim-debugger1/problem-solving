class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
     if (nums.size()<4)
         return {};
        bool flag=true;
        vector<vector<int>>sol; 
        for(int i=1;i<nums.size();i++){
         if(nums[i]!=nums[i-1])
             flag=false;
     }
        if(flag){
            vector<int>d;
            long long s=0;
            for(int i=0;i<4;i++){
                d.push_back(nums[0]);
                s+=nums[0];
            }
            sol.push_back(d);
            if(s==target)
            return sol;
            else 
                return {};
        }
        sort(nums.begin(),nums.end());
    int si=nums.size();
        //you have to ensure that every loop doesn't reuse the same number that's mean you have to          //check 3 loops and the third one with two variable
     for(int j=0;j<si;j++){
         if(j>0 && nums[j]==nums[j-1])
             continue;
        for(int i=j+1;i<si;i++){
            int l=i+1,r=si-1;
         while(l<r){
         int sum=nums[i]+nums[l]+nums[r]+nums[j];
         if(sum==target){
            sol.push_back({nums[i],nums[l],nums[r],nums[j]});
             while(l+1<si && nums[l]==nums[l+1]) l++;
            while(r-1>=0 && nums[r]==nums[r-1]) r--;
             l++;
             r--;
         }
         else if(sum>target)
             r--;
         else 
             l++;
         }
            while(i+1<si && nums[i+1]==nums[i]) i++;
        }
     }
        return sol;
    }
};