//it's hard to implement it i try to solve it but i cheat the solution from youtube 
vector<vector<int>>ve;
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        rec(candidates,target,0,0,{});
        return ve;
    }
    
    void rec(vector<int> candidated,int target,int ind,int sum,vector<int>temp){
         if(sum==target){
             ve.push_back(temp);
             return ;
         }
         if(sum>target || ind==candidated.size())
             return ;
        temp.push_back(candidated[ind]);
        rec(candidated,target,ind,sum+candidated[ind],temp);
        temp.pop_back();
        rec(candidated,target,ind+1,sum,temp);
    }