vector<string>sol;
void generateParenthesisByRec(int n,string s,int r,int l){
        if(r==l && r!=0 && r==n){
            sol.push_back(s);
            return ;
        }
        if(r<n){
            generateParenthesisByRec(n,s+"(",r+1,l);
        }if(l<r){
            generateParenthesisByRec(n,s+")",r,l+1);
        }
        return ;
    }
