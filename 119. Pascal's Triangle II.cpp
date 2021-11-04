    vector<int> getRow(int rowIndex) {
        if(rowIndex==0)
            return {1};
        if(rowIndex==1)
            return {1,1};
        vector<int>sol={1,1};
        rowIndex--;
        while(rowIndex!=0){
            vector<int>temp;
            temp.push_back(1);
            for(int i=0;i<sol.size()-1;i++){
                temp.push_back(sol[i]+sol[i+1]);
            }
            temp.push_back(1);
            sol.clear();
            for(int i=0;i<temp.size();i++)
                sol.push_back(temp[i]);
            rowIndex--;
        }
        return sol;
    }