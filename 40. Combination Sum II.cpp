//to hard to understand but i undrestand it (i guess) backTrack is hard to imagin and to implement  
vector<vector<int>>ve;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        backTrack(candidates,target,0,{});
        return ve;
    }
    void backTrack(vector<int>candidates,int target,int ind,vector<int>temp){
        if(target==0){
            ve.push_back(temp);
            return ;
        }
        if(target<0){
            return ;
        }
        int prev=-1;
        for(int i=ind;i<candidates.size();i++){
            if(candidates[i]==prev)
                continue;
            temp.push_back(candidates[i]);
            backTrack(candidates,target-candidates[i],i+1,temp);
            temp.pop_back();
            prev=candidates[i];
        }
    }