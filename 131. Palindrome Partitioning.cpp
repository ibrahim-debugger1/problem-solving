 vector<vector<string>>ve;
    vector<vector<string>> partition(string s) {
        dp(s,0,{});
        return ve;
    }
    bool isPalindrome(string a){
        int l=0,r=a.size()-1;
        while(l<r){
            if(a[l]!=a[r])
                return false;
            l++;r--;
        }
        return true;
    }
    void dp(string s,int ind,vector<string>temp){
        if(ind==s.size()){
            ve.push_back(temp);
            return ;
        }
        for(int i=ind,j=1;i<s.size();i++,j++){
            string a=s.substr(ind,j);
            if(isPalindrome(a)){
                temp.push_back(a);
                dp(s,i+1,temp);
                temp.pop_back();
            }
        }
    }