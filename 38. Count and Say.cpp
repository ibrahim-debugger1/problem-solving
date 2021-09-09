//easy question but you have to be careful about indexes
string countAndSay(int n) {
        int count=n-1;
        string s="1";
        while(count--){
            string temp="";
            map<char,int>m;
            m[s[0]]++;
            for(int i=1;i<s.size();i++){
                m[s[i]]++;
                if(s[i]==s[i-1])
                    continue;
                else{
                    temp+=(char)(m[s[i-1]]+48);
                    temp+=s[i-1];
                    m[s[i-1]]=0;
                }
            }
            temp+=(char)(m[s[s.size()-1]]+48);
            temp+=s[s.size()-1];
            m[s[s.size()-1]]=0;
            s=temp;
        }
        return s;
    }