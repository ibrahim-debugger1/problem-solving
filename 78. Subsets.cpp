vector<vector<int>>ve;
    vector<vector<int>> subsets(vector<int>& nums) {
        backTrack(nums,0,{});
        return ve;
    }
    void backTrack(vector<int>num,int ind,vector<int>temp){
        if(ind==num.size()){
            ve.push_back(temp);
            return ;
        }
        temp.push_back(num[ind]);
        backTrack(num,ind+1,temp);
        temp.pop_back();
        backTrack(num,ind+1,temp);
    }