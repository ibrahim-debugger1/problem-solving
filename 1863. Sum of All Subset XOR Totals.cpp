 int sum=0;
    int subsetXORSum(vector<int>& nums) {
        backTrack(nums,0,{});
        return sum;
    }
    void backTrack(vector<int>nums,int currind,vector<int>temp){
        if(currind==nums.size()){
            int t=0;
            for(int i=0;i<temp.size();i++){
                t^=temp[i];
            }
            sum+=t;
            return;
        }
        temp.push_back(nums[currind]);
        backTrack(nums,currind+1,temp);
        temp.pop_back();
        backTrack(nums,currind+1,temp);
    }