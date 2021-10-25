   map<int,int>ma;
    vector<vector<int>>sol;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            ma[nums[i]]++;
        }
        vector<int>withoutDuplicate;
        for(auto i:ma){
            withoutDuplicate.push_back(i.first);
        }
        backTrack(withoutDuplicate,0,{},nums.size());
        return sol;
    }
    void backTrack(vector<int>withoutDuplicate,int lev,vector<int>temp,int n){
        if(lev==n){
            sol.push_back(temp);
            return;
        }
        
        for(int i=0;i<withoutDuplicate.size();i++){
            if(ma[withoutDuplicate[i]]==0)
                continue;
            temp.push_back(withoutDuplicate[i]);
            ma[withoutDuplicate[i]]--;
            backTrack(withoutDuplicate,lev+1,temp,n);
            temp.pop_back();
            ma[withoutDuplicate[i]]++;
        }
    }